#ifndef ADSRGRAPH_H
#define ADSRGRAPH_H

#include <QGraphicsItem>

class ADSRGraph: public QGraphicsItem
{
public:
    ADSRGraph(QGraphicsItem *parent = 0);


    virtual QRectF boundingRect() const;
    virtual void paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *,
                       QWidget *);


    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *);

    enum PtClicledEnum{
        None    = 0,
        LevelStart = 1,
        Attack  = 2,
        Decay   = 3,
        Sustain = 4,
        Release = 5
    };

    double getW() const;
    void setW(double value);

    double getH() const;
    void setH(double value);

    void reset();


private:

    QPointF convert2GraphPos(double px, double py);
    double convert2GraphPosX(double px);
    double setGraphPosY(double py);

//    double x;
//    double y;
    double w;
    double h;

    double dxAttack;
    double dxDecay;

    double yMax;
    double xMax;
    double xOffset;
    double yOffset;

    QPointF ptOrigine;

    QPointF ptLevelStart;
    QPointF ptAttack;
    QPointF ptDecay;
    QPointF ptSustain;
    QPointF ptRelease;

    QPointF ptLevelStartPressed;
    QPointF ptAttackPressed;
    QPointF ptDecayPressed;
    QPointF ptSustainPressed;
    QPointF ptReleasePressed;

    PtClicledEnum ptClicledEnum;
};

#endif // ADSRGRAPH_H
