#include "effectroutinglink.h"
#include <QPainter>
#include <QPen>

EffectRoutingLink::EffectRoutingLink(double width, double height, QGraphicsItem *parent) :
    QGraphicsItem(parent),m_width(width),m_height(height)
{
    m_sampleEffectLinkList.append(QPair<Samples,SampleLink>(Sample1,LR));
    m_sampleEffectLinkList.append(QPair<Samples,SampleLink>(Sample2,LR));
    m_sampleEffectLinkList.append(QPair<Samples,SampleLink>(Sample3,LR));
    m_sampleEffectLinkList.append(QPair<Samples,SampleLink>(Sample4,LR));

    m_effectEffectLinkList.append(QPair<EffectToLink,bool>(Effect1,false));
    m_effectEffectLinkList.append(QPair<EffectToLink,bool>(Effect2,false));
    m_effectEffectLinkList.append(QPair<EffectToLink,bool>(Effect3,false));
    m_effectEffectLinkList.append(QPair<EffectToLink,bool>(Effect4,false));

    m_masterEffectLinkList.append(QPair<MasterEffectLinkDirection,bool>(MFX1ToMXF2,false));
    m_masterEffectLinkList.append(QPair<MasterEffectLinkDirection,bool>(MFX2ToMXF1,false));

}

QRectF EffectRoutingLink::boundingRect() const
{
    return QRectF(0,0,m_width,m_height);
}

void EffectRoutingLink::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QPen pen;
    pen.setWidth(5);
    pen.setColor(QColor(qRgb(27, 89, 25)));
    painter->setPen(pen);
    painter->setRenderHint(QPainter::Antialiasing);
    //  L/R Line
    painter->drawLine(0,m_height-10,m_width,m_height-10);

    // Text
    painter->drawText(QRect(1430,m_height-40,30,30),"L/R");

    // Draw Sample Effect Links
    drawSampleEffectLink(painter);
    // Draw Effect Effect Links
    drawEffectEffectLink(painter);
    // Draw Master Effect Links
    drawMasterEffectLink(painter);
}

void EffectRoutingLink::setSampleEffectLink(EffectRoutingLink::Samples sample, EffectRoutingLink::SampleLink link)
{
    m_sampleEffectLinkList[sample].second = link;
    update();
}

void EffectRoutingLink::setEffectEffectLink(EffectRoutingLink::EffectToLink effect, bool state)
{
    m_effectEffectLinkList[effect].second = state;
    update();
}

void EffectRoutingLink::setMasterEffectLink(EffectRoutingLink::MasterEffectLinkDirection direction, bool state)
{
    m_masterEffectLinkList[direction].second = state;
    update();
}

void EffectRoutingLink::drawEffectEffectLink(QPainter *painter)
{
    double yOffset        = 92;
    double xInit          = 680;
    double xLinked        = 30 + xInit;
    double xUnlinked      = 60 + xInit;
    double frameHeight    = 54;
    double vSpacing       = 6;
    double yFrameIn       = 11 + yOffset;
    double yFrameOut      = 3*11 + yOffset;

    QPen pen;
    pen.setWidth(5);
    pen.setColor(QColor(qRgb(193, 53, 4)));
    painter->setPen(pen);

    // link
    for(int i=0; i<m_effectEffectLinkList.count(); i++){
        if(m_effectEffectLinkList.at(i).second){
            int effectIndex = m_effectEffectLinkList.at(i).first;
            double yOut      = (effectIndex-1)*(frameHeight+vSpacing) + yFrameOut;
            double yIn     = (effectIndex)*(frameHeight+vSpacing) + yFrameIn;
            painter->drawLine(xInit, yOut, xLinked, yOut);
            painter->drawLine(xLinked, yOut, xLinked, yIn);
            painter->drawLine(xLinked, yIn, xInit, yIn);
        }
    }
    if(!m_effectEffectLinkList.at(0).second){
    painter->drawLine(xUnlinked,
                      -(frameHeight+vSpacing)+yFrameOut+3,
                      xUnlinked,
                      m_height - 10);
    }else if(!m_effectEffectLinkList.at(1).second){
        painter->drawLine(xUnlinked,
                          yFrameOut+3,
                          xUnlinked,
                          m_height - 10);
    }else if(!m_effectEffectLinkList.at(2).second){
        painter->drawLine(xUnlinked,
                          (frameHeight+vSpacing)+yFrameOut+3,
                          xUnlinked,
                          m_height - 10);
    }else if(!m_effectEffectLinkList.at(3).second){
        painter->drawLine(xUnlinked,
                          2*(frameHeight+vSpacing)+yFrameOut+3,
                          xUnlinked,
                          m_height - 10);
    }



    // horizontal line
    if(!m_effectEffectLinkList.at(0).second){
        painter->drawLine(xInit,
                          -(frameHeight+vSpacing)+yFrameOut,
                          xUnlinked,
                          -(frameHeight+vSpacing)+yFrameOut);
    }
    if(!m_effectEffectLinkList.at(1).second){
        painter->drawLine(xInit,
                          yFrameOut,
                          xUnlinked,
                          yFrameOut);
    }
    if(!m_effectEffectLinkList.at(2).second){
        painter->drawLine(xInit,
                          1*(frameHeight+vSpacing)+yFrameOut,
                          xUnlinked,
                          1*(frameHeight+vSpacing) + yFrameOut);
    }

    painter->drawLine(xInit,
                      2*(frameHeight+vSpacing) + yFrameOut,
                      xUnlinked,
                      2*(frameHeight+vSpacing) + yFrameOut);
}

void EffectRoutingLink::drawSampleEffectLink(QPainter *painter)
{
    QPen pen;
    pen.setWidth(5);

    for(int i=0;i<m_sampleEffectLinkList.count();i++){
        int sampleIndex = m_sampleEffectLinkList.at(i).first;
        int effectIndex = m_sampleEffectLinkList.at(i).second;

        if(sampleIndex == 0){
            pen.setColor(QColor(qRgb(202, 36, 36)));
        }else if(sampleIndex == 1){
            pen.setColor(QColor(qRgb(12, 70, 99)));
        }else if(sampleIndex == 2){
            pen.setColor(QColor(qRgb(81, 28, 116)));
        }else if(sampleIndex == 3){
            pen.setColor(QColor(qRgb(255, 132, 25)));
        }

        painter->setPen(pen);

        QPointF p1(mapFromScene(QPointF(185,(sampleIndex-1) * (54+6) + 27+92)));
        QPointF p2;

        if(effectIndex == LR){
            p2 = QPointF(mapFromScene(QPointF(195,m_height-10)));
            painter->drawLine(p1.x(),p1.y(), p2.x(),p1.y());
            painter->drawLine(p2.x(), p1.y(), p2.x(), p2.y());
        }else if(effectIndex == OFF){
            p1 = QPointF(mapFromScene(QPointF(0,0)));
            p2 = QPointF(mapFromScene(QPointF(0,0)));
        }else{
            p2 = QPointF(mapFromScene(QPointF(310,(effectIndex-2) * (54+6) + 27 + 92)));
            double width = p2.x() - p1.x();

            painter->drawLine(p1,QPointF(p1.x() + width*0.2 , p1.y()));
            painter->drawLine(QPointF(p1.x() + width*0.2, p1.y()),
                              QPointF(p2.x() - width*0.2, p2.y()));
            painter->drawLine(QPointF(p2.x() - width*0.2,
                                      p2.y()), p2);
        }
    }
}

void EffectRoutingLink::drawMasterEffectLink(QPainter *painter)
{
    QPen pen;
    pen.setWidth(5);
    pen.setColor(qRgb(140,24,45));
    painter->setPen(pen);

    double yMXF1 = 61;
    double yMXF2 = 150;

    // LR --> MFX1
    painter->drawLine(780, m_height-10, 780, yMXF1);
    painter->drawLine(780, yMXF1, 967, yMXF1);
    // LR --> MFX2
    painter->drawLine(800, m_height-10, 800, yMXF2);
    painter->drawLine(800, yMXF2, 967, yMXF2);
    // Volume --> LR
    painter->drawLine(850, m_height-10, 850, m_height -50);
    painter->drawLine(904, m_height-10, 904, m_height -50);
    // LR --> MFX3
    painter->drawLine(950, m_height-10, 950, 80+2*(54+27));
    painter->drawLine(950, 80+2*(54+27), 967, 80+2*(54+27));

    // MFX3 --> LR
    painter->drawLine(1372, 80+2*(54+27), 1400, 80+2*(54+27));
    painter->drawLine(1400, 80+2*(54+27), 1400, m_height-10);

    // MFX1 --> Volume
    painter->drawLine(1372, yMXF1, 1400, yMXF1);
    painter->drawLine(1400, yMXF1, 1400, yMXF1+(54+27)+27+20);
    painter->drawLine(1400, yMXF1+(54+27)+27+20, 850, yMXF1+(54+27)+27+20);
    painter->drawLine(850, yMXF1+(54+27)+27+20, 850, yMXF1+(54+27)+27+42);

    // MFX2 --> Volume
    painter->drawLine(1335, yMXF2+27, 1335, yMXF2+27+25);
    painter->drawLine(1335, yMXF2+27+25, 904, yMXF2+27+25);
    painter->drawLine(904, yMXF2+27+25, 904, yMXF2+27+35);

    // MFX1 --> MFX2
    if(m_masterEffectLinkList.at(0).second){
        pen.setColor(qRgb(48,54,77));
        painter->setPen(pen);
        painter->drawLine(1335, yMXF1+27, 1335, yMXF1+27+12);
        painter->drawLine(1335, yMXF1+27+12, 850,yMXF1+27+12);
        painter->drawLine(850,yMXF1+27+12, 850, yMXF2);
    }

    // MFX2 --> MFX1
    if(m_masterEffectLinkList.at(1).second){
        pen.setColor(qRgb(106,86,69));
        painter->setPen(pen);
        painter->drawLine(1335, yMXF2-27, 1335, yMXF2-12-27);
        painter->drawLine(1335, yMXF2-12-27, 904,yMXF2-12-27);
        painter->drawLine(904,yMXF2-12-27, 904, yMXF1);
    }
}
