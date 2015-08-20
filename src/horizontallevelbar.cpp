#include "horizontallevelbar.h"

#include <QPainter>
#include <QMouseEvent>
#include <qmath.h>
#include <QDebug>

HorizontalLevelBar::HorizontalLevelBar(QWidget *parent) :
    QWidget(parent)
{
    m_mouseLeftButtonPressed = false;
    m_doInit = true;
    m_markerOffset = 3;
    m_maxLevel = 100;
}

int HorizontalLevelBar::level() const
{
    return m_level;
}

void HorizontalLevelBar::setLevel(int level)
{
    m_level = level;
    m_xPos = convertToPos(level);
    update();
}

int HorizontalLevelBar::maxLevel() const
{
    return m_maxLevel;
}

void HorizontalLevelBar::setMaxLevel(int level)
{
    m_maxLevel = level;
    update();
}

void HorizontalLevelBar::paintEvent(QPaintEvent *)
{
    // initialization
    if(m_doInit){
        m_textZoneHeight = height() - 2;
        m_textZoneWidth = 25;

        m_backRect.setX(0);
        m_backRect.setY(0);
        m_backRect.setWidth(width() - m_textZoneWidth);
        m_backRect.setHeight(height()-2*m_pen.width());

        // Text Zone
        m_levelTextRect.setX(width() - m_textZoneWidth-m_pen.width());
        m_levelTextRect.setY(0);
        m_levelTextRect.setWidth(m_textZoneWidth);
        m_levelTextRect.setHeight(m_textZoneHeight);


        m_xPos = 50;

        m_doInit = false;
    }

    m_pen.setColor(QColor("White"));
    m_pen.setWidth(1);

    // Draw Text zone
    QPainter painter(this);
    painter.setPen(m_pen);
    painter.setBrush(QColor(qRgb(141, 141, 141)));
    painter.drawRect(m_levelTextRect);

    // Text
    m_pen.setColor(QColor("Black"));
    painter.setPen(m_pen);
    QFont font;
    font.setFamily("Electron");
    font.setPointSize(8);
    font.setBold(true);
    painter.setFont(font);
    painter.drawText(m_levelTextRect,Qt::AlignCenter,convertToValue(m_xPos));

    m_pen.setColor(QColor("White"));
    painter.setPen(m_pen);

    // Background Rect
    painter.setBrush(QBrush(QColor("Black")));
    painter.drawRect(m_backRect);

    // green marker
    m_markerRect.setX(m_markerOffset);
    m_markerRect.setY(3);
    m_markerRect.setWidth(m_xPos - m_markerOffset);
    m_markerRect.setHeight(height()-2-2*3);

    painter.setBrush(QBrush(QColor(qRgb(68, 150, 47))));
    painter.drawRect(m_markerRect);


}

void HorizontalLevelBar::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        if(event->pos().x()>m_markerOffset && event->pos().x()<width() - m_markerOffset - m_textZoneWidth){
            m_mouseLeftButtonPressed = true;
        }
    }
    update();
}

void HorizontalLevelBar::mouseMoveEvent(QMouseEvent *event)
{
    if(m_mouseLeftButtonPressed){

        if(event->pos().x() < m_markerOffset){
            m_xPos = m_markerOffset;
            update();
            return;
        }else if(event->pos().x() > width() - (m_textZoneWidth + m_markerOffset)){
            m_xPos = width() - (m_textZoneWidth + m_markerOffset);
            update();
            return;
        }

        m_xPos = event->pos().x();

        update();
    }
}

void HorizontalLevelBar::mouseReleaseEvent(QMouseEvent *)
{
    m_mouseLeftButtonPressed = false;
}

QString HorizontalLevelBar::convertToValue(int xPos)
{
    double a = m_maxLevel/(width()-(m_textZoneWidth + 2*m_markerOffset));

    int value = qCeil(a * (xPos-m_markerOffset));

    QString valueString = QString("%1").arg(value);
    valueString = valueString.rightJustified(3,'0');

    return valueString;
}

int HorizontalLevelBar::convertToPos(int value)
{
    double a = (width()-(m_textZoneWidth + 2*m_markerOffset))/m_maxLevel;

    int xPos = a * (double)value + m_markerOffset;

    return xPos;
}
