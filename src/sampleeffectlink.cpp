#include "sampleeffectlink.h"
#include <QGraphicsScene>
#include <QPainter>
#include <QPen>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>

SampleEffectLink::SampleEffectLink(QGraphicsItem *parent) :
    QGraphicsItem(parent)
{
}

QRectF SampleEffectLink::boundingRect() const
{
    return QRectF(0,0,300,300);
}

void SampleEffectLink::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{

    QPen pen;
    pen.setWidth(5);
    painter->setRenderHint(QPainter::Antialiasing);

    for(int i=0;i<m_linkList.count();i++){
        int sampleIndex = m_linkList.at(i).first;
        int effectIndex = m_linkList.at(i).second;

        QPointF p1(mapFromScene(QPointF(-10,(sampleIndex-1) * (54+6) + 27 - 97)));
        QPointF p2(mapFromScene(QPointF(130-10,(effectIndex-1) * (54+6) + 27 - 97)));

        // top limit : -10, -97
        // bottom limit : 130, 130

        double width = p2.x() - p1.x();

        if(sampleIndex == 1){
            pen.setColor(QColor(qRgb(202, 36, 36)));
        }else if(sampleIndex == 2){
            pen.setColor(QColor(qRgb(12, 70, 99)));
        }else if(sampleIndex == 3){
            pen.setColor(QColor(qRgb(27, 89, 25)));
        }else if(sampleIndex == 4){
            pen.setColor(QColor(qRgb(255, 132, 25)));
        }
        painter->setPen(pen);

        painter->drawLine(p1,QPointF(p1.x() + width*0.2 , p1.y()));
        painter->drawLine(QPointF(p1.x() + width*0.2, p1.y()),
                          QPointF(p2.x() - width*0.2, p2.y()));
        painter->drawLine(QPointF(p2.x() - width*0.2,
                                  p2.y()), p2);

    }

}

void SampleEffectLink::addLink(int sampleIndex, int effectIndex)
{
    for(int i=0;i<m_linkList.count();i++){
        if(m_linkList.at(i).first == sampleIndex){
            m_linkList.removeAt(i);
            break;
        }
    }

    m_linkList.push_back(QPair<int, int>(sampleIndex,effectIndex));
    update();

}

void SampleEffectLink::removeLink(int sampleIndex, int effectIndex)
{
    m_linkList.removeAt(m_linkList.indexOf(QPair<int,int>(sampleIndex,effectIndex)));
    update();
}

void SampleEffectLink::clearAll()
{
    m_linkList.clear();
    update();
}
