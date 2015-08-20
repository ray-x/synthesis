#ifndef EFFECTROUTINGLINK_H
#define EFFECTROUTINGLINK_H

#include <QGraphicsItem>

class EffectRoutingLink : public QGraphicsItem
{
public:
    explicit EffectRoutingLink(double width, double height, QGraphicsItem *parent = 0);

    enum Samples{
        Sample1=0,
        Sample2,
        Sample3,
        Sample4
    };

    enum SampleLink{
        LR=0,
        IFX1,
        IFX2,
        IFX3,
        IFX4,
        OFF
    };

    enum EffectToLink{
        Effect1=0,
        Effect2,
        Effect3,
        Effect4,
    };

    enum MasterEffectLinkDirection{
        MFX1ToMXF2=0,
        MFX2ToMXF1
    };

    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *,
                       QWidget *);
    void setSampleEffectLink(Samples sample, SampleLink link);
    void setEffectEffectLink(EffectToLink effect, bool state);
    void setMasterEffectLink(MasterEffectLinkDirection direction, bool state);

private:
    double m_width;
    double m_height;

    QList<QPair<Samples,SampleLink> > m_sampleEffectLinkList;
    QList<QPair<EffectToLink,bool> > m_effectEffectLinkList;
    QList<QPair<MasterEffectLinkDirection,bool> > m_masterEffectLinkList;

    void drawEffectEffectLink(QPainter *painter);
    void drawSampleEffectLink(QPainter *painter);
    void drawMasterEffectLink(QPainter *painter);

};

#endif // EFFECTROUTINGLINK_H
