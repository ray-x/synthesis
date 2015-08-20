#ifndef MASTEREFFECTLINK_H
#define MASTEREFFECTLINK_H

#include <QGraphicsItem>

class MasterEffectLink : public QGraphicsItem
{

public:
    explicit MasterEffectLink(QGraphicsItem *parent = 0);


    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *,
                       QWidget *);


    void addLink(int effectIndex);
    void removeLink(int effectIndex);
    void clearAll();

private:
    QList<int> m_linkList;

    double m_xLinked;
    double m_xUnlinked;
    double m_xInit;
    double m_xOffset;
    double m_yOffset;
    double m_frameHeight;
    double m_vSpacing;
    double m_yFrameIn;
    double m_yFrameOut;

};

#endif // MASTEREFFECTLINK_H
