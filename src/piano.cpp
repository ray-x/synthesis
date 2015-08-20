#include "piano.h"

#include <QPainter>
#include <QMouseEvent>
#include <qmath.h>
#include <QDebug>

Piano::Piano(QWidget *parent) :
    QWidget(parent)
{
    // Initialization of white key list
    m_whiteKeyList.append(QPair<QString,QRectF*>("A0", new QRectF()));
    m_whiteKeyList.append(QPair<QString,QRectF*>("B0", new QRectF()));
    for(int i=1;i<8;i++){
        m_whiteKeyList.append(QPair<QString,QRectF*>("C"+QString("%1").arg(i), new QRectF()));
        m_whiteKeyList.append(QPair<QString,QRectF*>("D"+QString("%1").arg(i), new QRectF()));
        m_whiteKeyList.append(QPair<QString,QRectF*>("E"+QString("%1").arg(i), new QRectF()));
        m_whiteKeyList.append(QPair<QString,QRectF*>("F"+QString("%1").arg(i), new QRectF()));
        m_whiteKeyList.append(QPair<QString,QRectF*>("G"+QString("%1").arg(i), new QRectF()));
        m_whiteKeyList.append(QPair<QString,QRectF*>("A"+QString("%1").arg(i), new QRectF()));
        m_whiteKeyList.append(QPair<QString,QRectF*>("B"+QString("%1").arg(i), new QRectF()));
    }
    m_whiteKeyList.append(QPair<QString,QRectF*>("C8",new QRectF()));

    // Initialization of black key list
    m_blackKeyList.append(QPair<QString,QRectF*>("A#0", new QRectF()));
    for(int i=1;i<8;i++){
        m_blackKeyList.append(QPair<QString,QRectF*>("C#"+QString("%1").arg(i), new QRectF()));
        m_blackKeyList.append(QPair<QString,QRectF*>("D#"+QString("%1").arg(i), new QRectF()));
        m_blackKeyList.append(QPair<QString,QRectF*>("F#"+QString("%1").arg(i), new QRectF()));
        m_blackKeyList.append(QPair<QString,QRectF*>("G#"+QString("%1").arg(i), new QRectF()));
        m_blackKeyList.append(QPair<QString,QRectF*>("A#"+QString("%1").arg(i), new QRectF()));
    }

    m_firstxPos                 = 0;
    m_leftUnselectedRectWidth   = 0;
    m_rightInselectedRectWidth  = 0;

    m_leftbuttonClicked         = false;


}

void Piano::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        m_firstxPos = qFloor(event->pos().x()/m_whiteKeyWidth)*m_whiteKeyWidth;
        m_leftbuttonClicked = true;
    }
}

void Piano::mouseMoveEvent(QMouseEvent *event)
{
    if(m_leftbuttonClicked){

        // update the rectangles' width
        if(event->pos().x() > 0 && event->pos().x()<width()){
            if(event->pos().x() > m_firstxPos){
                m_leftUnselectedRectWidth =  m_firstxPos;
                m_rightInselectedRectWidth = width() - qCeil(event->pos().x()/m_whiteKeyWidth)*m_whiteKeyWidth;

                emit leftKeySelected(m_whiteKeyList.at(m_firstxPos/m_whiteKeyWidth).first);
                emit rightKeySelected(m_whiteKeyList.at(qCeil(event->pos().x()/m_whiteKeyWidth)-1).first);

            }else{
                m_leftUnselectedRectWidth = qFloor(event->pos().x()/m_whiteKeyWidth)*m_whiteKeyWidth;
                m_rightInselectedRectWidth = width() - m_firstxPos;

                emit leftKeySelected(m_whiteKeyList.at(qFloor(event->pos().x()/m_whiteKeyWidth)).first);
                emit rightKeySelected(m_whiteKeyList.at(qFloor(m_firstxPos/m_whiteKeyWidth)).first);
            }
        }
        update();
    }
}

void Piano::mouseReleaseEvent(QMouseEvent *event)
{
    m_firstxPos = 0;
    m_leftbuttonClicked = false;
}

void Piano::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;

    // Draw white keys
    pen.setColor(QColor("Black"));
    painter.setBrush(QBrush(QColor("White")));

    m_whiteKeyWidth = (double)width()/m_whiteKeyList.count();

    for(int i=0; i<m_whiteKeyList.count();i++){
        QRectF *rect = m_whiteKeyList.at(i).second;
        rect->setX(i*m_whiteKeyWidth);
        rect->setY(0);
        rect->setWidth(m_whiteKeyWidth);
        rect->setHeight(height()-1);

        painter.drawRect(*rect);

    }
    // Draw Black keys
    painter.setBrush(QBrush(QColor("Black")));

    m_blackKeyWidth = (double) (m_whiteKeyWidth-6.0);
    double x0 = double (m_whiteKeyWidth - m_blackKeyWidth/2.0);

    QRectF *rectAdO = m_blackKeyList.at(0).second;
    rectAdO->setX(x0);
    rectAdO->setY(0);
    rectAdO->setWidth(m_blackKeyWidth);
    rectAdO->setHeight(height()*2/3);

    painter.drawRect(*rectAdO);

    for(int i=1;i<8;i++){
        QRectF *rectCd = m_blackKeyList.at(1*i).second;
        rectCd->setX((double)((i-1.0)*7.0+2.0)*m_whiteKeyWidth + x0);
        rectCd->setY(0);
        rectCd->setWidth(m_blackKeyWidth);
        rectCd->setHeight(height()*2.0/3.0);

        painter.drawRect(*rectCd);

        QRectF *rectDd = m_blackKeyList.at(2*i).second;
        rectDd->setX((double)((i-1.0)*7.0+3.0)*m_whiteKeyWidth + x0);
        rectDd->setY(0);
        rectDd->setWidth(m_blackKeyWidth);
        rectDd->setHeight(height()*2.0/3.0);

        painter.drawRect(*rectDd);

        QRectF *rectFd = m_blackKeyList.at(3*i).second;
        rectFd->setX((double)((i-1)*7+5)*m_whiteKeyWidth + x0);
        rectFd->setY(0);
        rectFd->setWidth(m_blackKeyWidth);
        rectFd->setHeight(height()*2/3);

        painter.drawRect(*rectFd);

        QRectF *rectGd = m_blackKeyList.at(4*i).second;
        rectGd->setX((double)((i-1)*7+6)*m_whiteKeyWidth + x0);
        rectGd->setY(0);
        rectGd->setWidth(m_blackKeyWidth);
        rectGd->setHeight(height()*2/3);

        painter.drawRect(*rectGd);

        QRectF *rectAd = m_blackKeyList.at(5*i).second;
        rectAd->setX((double)i*7*m_whiteKeyWidth + x0);
        rectAd->setY(0);
        rectAd->setWidth(m_blackKeyWidth);
        rectAd->setHeight(height()*2/3);

        painter.drawRect(*rectAd);

    }

    // Draw rectangle covering unselected left keys
    m_leftUnselectedRect.setX(0);
    m_leftUnselectedRect.setY(0);
    m_leftUnselectedRect.setWidth(m_leftUnselectedRectWidth);
    m_leftUnselectedRect.setHeight(height());

    painter.setBrush(QBrush(QColor(128,128,128,128)));
    painter.drawRect(m_leftUnselectedRect);

    // Draw rectangle covering unselected right keys
    m_leftUnselectedRect.setX(width()-m_rightInselectedRectWidth);
    m_leftUnselectedRect.setY(0);
    m_leftUnselectedRect.setWidth(m_rightInselectedRectWidth);
    m_leftUnselectedRect.setHeight(height());

    painter.setBrush(QBrush(QColor(128,128,128,128)));
    painter.drawRect(m_leftUnselectedRect);

}


