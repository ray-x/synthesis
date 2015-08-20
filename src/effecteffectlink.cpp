#include "effecteffectlink.h"

#include <QPen>
#include <QPainter>

EffectEffectLink::EffectEffectLink(QGraphicsItem *parent):
    QGraphicsItem(parent)
{
    m_xOffset   = -10;
    m_yOffset   = -97;
    m_xInit     = 0 + m_xOffset;
    m_xLinked   = 30 + m_xOffset;
    m_xUnlinked = 60 + m_xOffset;
    m_frameHeight = 54;
    m_vSpacing = 6;
    m_yFrameIn = 11 + m_yOffset;
    m_yFrameOut = 3*11 + m_yOffset;

}

QRectF EffectEffectLink::boundingRect() const
{
    return QRectF(0,0,300,300);
}

void EffectEffectLink::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    QPen pen;
    pen.setWidth(5);
    pen.setColor(QColor(qRgb(27, 89, 25)));
    painter->setPen(pen);
    painter->setRenderHint(QPainter::Antialiasing);
    // link
    for(int i=0; i<m_linkList.count(); i++){
        int effectIndex = m_linkList.at(i);
        double yOut      = (effectIndex-1)*(m_frameHeight+m_vSpacing) + m_yFrameOut;
        double yIn     = (effectIndex)*(m_frameHeight+m_vSpacing) + m_yFrameIn;
        painter->drawLine(m_xInit, yOut, m_xLinked, yOut);
        painter->drawLine(m_xLinked, yOut, m_xLinked, yIn);
        painter->drawLine(m_xLinked, yIn, m_xInit, yIn);
    }

    painter->drawLine(m_xUnlinked,
                      m_yFrameOut+3,
                      m_xUnlinked,
                      3*(m_frameHeight+m_vSpacing) + m_yFrameOut);


    painter->drawLine(m_xUnlinked,
                      m_yFrameOut,
                      110,
                      m_yFrameOut);

    // horizontal line
    if(!m_linkList.contains(1)){
        painter->drawLine(m_xInit, m_yFrameOut, m_xUnlinked, m_yFrameOut);
    }
    if(!m_linkList.contains(2)){
        painter->drawLine(m_xInit,
                          (m_frameHeight+m_vSpacing)+m_yFrameOut,
                          m_xUnlinked,
                          (m_frameHeight+m_vSpacing) + m_yFrameOut);
    }
    if(!m_linkList.contains(3)){
        painter->drawLine(m_xInit,
                          2*(m_frameHeight+m_vSpacing)+m_yFrameOut,
                          m_xUnlinked,
                          2*(m_frameHeight+m_vSpacing) + m_yFrameOut);
    }

    painter->drawLine(m_xInit,
                      3*(m_frameHeight+m_vSpacing) + m_yFrameOut,
                      m_xUnlinked,
                      3*(m_frameHeight+m_vSpacing) + m_yFrameOut);

}

void EffectEffectLink::addLink(int effectIndex)
{
    if(m_linkList.indexOf(effectIndex) == -1){
        m_linkList.push_back(effectIndex);
        update();
    }
}

void EffectEffectLink::removeLink(int effectIndex)
{
    m_linkList.removeAt(m_linkList.indexOf(effectIndex));
    update();
}

void EffectEffectLink::clearAll()
{
    m_linkList.clear();
    update();
}
