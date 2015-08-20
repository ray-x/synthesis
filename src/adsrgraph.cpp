#include "adsrgraph.h"

#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsScene>
#include <qmath.h>
#include <QDebug>

ADSRGraph::ADSRGraph(QGraphicsItem *parent)
    : QGraphicsItem(parent)
{


    w = (124)*5.5;//635.0;
    h = (52)*5;//300.0;

    setX(-w/2.0);
    setY(-h/2.0);



    xOffset = 20;
    yOffset = 20;

    xMax = w - 2*xOffset;
    yMax = h - 2*yOffset;

    dxAttack = 0;
    dxDecay = 0;

    ptOrigine = convert2GraphPos(0,0);

    ptClicledEnum = None;

    ptLevelStart = convert2GraphPos(0,0);
    ptAttack = convert2GraphPos(xMax/4,yMax);
    ptDecay = convert2GraphPos(xMax*2/4,yMax/2);
    ptSustain = convert2GraphPos(xMax*3/4,yMax/2);
    ptRelease = convert2GraphPos(xMax*4/4,0);


}

QRectF ADSRGraph::boundingRect() const
{
    return QRectF(x(),y(),w,h);

}

void ADSRGraph::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{


    xMax = w - 2*xOffset;
    yMax = h - 2*yOffset;

    ptOrigine = convert2GraphPos(0,0);


    painter->setBrush(QBrush(QColor(qRgb(16, 97, 116))));
    painter->drawRect(boundingRect());
    QPen pen(QColor("white"));
    pen.setWidth(10);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing);
    painter->drawLine(ptOrigine,convert2GraphPos(0,yMax)); // Y axe
    painter->drawLine(ptOrigine,convert2GraphPos(xMax,0)); // X axe

    painter->drawLine(ptLevelStart,ptAttack);
    painter->drawLine(ptAttack,ptDecay);
    painter->drawLine(ptDecay,ptSustain);
    painter->drawLine(ptSustain,ptRelease);

    pen.setColor(QColor("Black"));
    painter->setPen(pen);
    painter->setBrush(QBrush(QColor("White")));
    painter->drawEllipse(ptLevelStart, 7,7);
    painter->drawEllipse(ptAttack, 7,7);
    painter->drawEllipse(ptDecay, 7,7);
    painter->drawEllipse(ptSustain, 7,7);
    painter->drawEllipse(ptRelease, 7,7);
}

void ADSRGraph::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    ptLevelStartPressed = ptLevelStart;
    ptAttackPressed = ptAttack;
    ptDecayPressed = ptDecay;
    ptSustainPressed = ptSustain;
    ptReleasePressed = ptRelease;

    if(event->button() == Qt::LeftButton){
        if(sqrt(pow(event->pos().x() - ptLevelStart.x()-5,2) + pow(event->pos().y() - ptLevelStart.y()-5,2)) < 20){
            ptClicledEnum = LevelStart;
        }else if(sqrt(pow(event->pos().x() - ptAttack.x()-5,2) + pow(event->pos().y() - ptAttack.y()-5,2)) < 20 ){
            ptClicledEnum = Attack;
        }else if(sqrt(pow(event->pos().x() - ptDecay.x()-5,2) + pow(event->pos().y() - ptDecay.y()-5,2)) < 20 ){
            ptClicledEnum = Decay;
        }else if(sqrt(pow(event->pos().x() - ptSustain.x()-5,2) + pow(event->pos().y() - ptSustain.y()-5,2)) < 20 ){
            ptClicledEnum = Sustain;
        }else if(sqrt(pow(event->pos().x() - ptRelease.x()-5,2) + pow(event->pos().y() - ptRelease.y()-5,2)) < 20 ){
            ptClicledEnum = Release;
        }else{
            ptClicledEnum = None;
        }
    }

}

void ADSRGraph::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(ptClicledEnum == LevelStart){
        if(-event->pos().y() > -setGraphPosY(0) && -event->pos().y() < -setGraphPosY(yMax)){
            ptLevelStart.setY(event->pos().y());
        }else if(-event->pos().y() > -setGraphPosY(yMax)){
            ptLevelStart.setY(setGraphPosY(yMax));
        }else if(-event->pos().y()< -setGraphPosY(0)){
            ptLevelStart.setY(setGraphPosY(0));
        }
        update();
    }else if(ptClicledEnum == Attack){
        if(event->pos().x() < convert2GraphPosX(xMax/4) && event->pos().x() > ptOrigine.x()){
            ptAttack.setX(event->pos().x());

        }else if(event->pos().x() > convert2GraphPosX(xMax/4)){
            ptAttack.setX(convert2GraphPosX(xMax/4));
        }else if(event->pos().x() < setGraphPosY(0)){
            ptAttack.setX(convert2GraphPosX(0));
        }
        dxAttack = ptAttack.x() - ptAttackPressed.x();
        ptDecay.setX(ptDecayPressed.x() + dxAttack);
        ptSustain.setX(ptSustainPressed.x() + dxAttack);
        ptRelease.setX(ptReleasePressed.x() + dxAttack);
        update();

    }else   if(ptClicledEnum == Decay){
        if(event->pos().x()<ptAttack.x()+ xMax/4 && event->pos().x()>ptAttack.x()){
            ptDecay.setX(event->pos().x());
        }else if(event->pos().x()>ptAttack.x()+xMax/4 ){
            ptDecay.setX(ptAttack.x()+xMax/4 );
        }else if(event->pos().x()<ptAttack.x()){
            ptDecay.setX(ptAttack.x());
        }
        dxDecay = ptDecay.x() - ptDecayPressed.x();
        ptSustain.setX(ptDecay.x() + xMax/4);
        ptRelease.setX(ptReleasePressed.x() + dxDecay);
        update();

    }else   if(ptClicledEnum == Sustain){
        if(-event->pos().y() > -setGraphPosY(0) && -event->pos().y() < -setGraphPosY(yMax)){
            ptSustain.setY(event->pos().y());
            ptDecay.setY(event->pos().y());
        }else if(-event->pos().y() > -setGraphPosY(yMax)){
            ptSustain.setY(setGraphPosY(yMax));
            ptDecay.setY(setGraphPosY(yMax));
        }else if(-event->pos().y()< -setGraphPosY(0)){
            ptSustain.setY(setGraphPosY(0));
            ptDecay.setY(setGraphPosY(0));
        }
        update();

    }else   if(ptClicledEnum == Release){
        if(event->pos().x() > ptSustain.x() && event->pos().x() < ptSustain.x() + xMax/4){
            ptRelease.setX(event->pos().x());
        }else if(event->pos().x()>ptSustain.x() + xMax/4){
            ptRelease.setX(ptSustain.x() + xMax/4);
        }else if(event->pos().x()<ptSustain.x()){
            ptRelease.setX(ptSustain.x());
        }
        update();
    }
}

void ADSRGraph::mouseReleaseEvent(QGraphicsSceneMouseEvent *)
{
    ptClicledEnum = None;
}

QPointF ADSRGraph::convert2GraphPos(double px, double py)
{
    return QPointF(x() + xOffset + px, y() + h - yOffset - py);
}

double ADSRGraph::convert2GraphPosX(double px)
{
    return x() + xOffset + px;
}

double ADSRGraph::setGraphPosY(double py)
{
    return y() + h - yOffset - py;
}
double ADSRGraph::getH() const
{
    return h;
}

void ADSRGraph::setH(double value)
{
    h = value;
    update();
}

void ADSRGraph::reset()
{

    ptLevelStart = convert2GraphPos(0,0);;
    ptAttack = convert2GraphPos(xMax/4,yMax);
    ptDecay = convert2GraphPos(xMax*2/4,yMax/2);
    ptSustain = convert2GraphPos(xMax*3/4,yMax/2);
    ptRelease = convert2GraphPos(xMax*4/4,0);

    update();
}

double ADSRGraph::getW() const
{
    return w;
}

void ADSRGraph::setW(double value)
{
    w = value;
    update();
}

