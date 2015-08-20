#ifndef SAMPLEEFFECTLINK_H
#define SAMPLEEFFECTLINK_H

#include <QGraphicsItem>

class SampleEffectLink : public QGraphicsItem
{
public:
    explicit SampleEffectLink(QGraphicsItem *parent = 0);

    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *,
                       QWidget *);


    void addLink(int sampleIndex, int effectIndex);
    void removeLink(int sampleIndex, int effectIndex);
    void clearAll();

private:
    QList<QPair<int,int> > m_linkList;  //sampleIndex || effectIndex
};

#endif // SAMPLEEFFECTLINK_H
