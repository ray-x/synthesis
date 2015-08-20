#include "verticallevelbar.h"

#include <QPainter>
#include <QMouseEvent>
#include <qmath.h>
#include <QDebug>
#include <QStyleOption>

VerticalLevelBar::VerticalLevelBar(QWidget *parent) :
    QWidget(parent)
{
    m_mouseLeftButtonPressed = false;
    m_doInit                = true;
    m_Offset                = 1;
    m_maxLevel              = 127;

    m_borderwidth           = 2;
    m_borderColor           = QColor("White");
    m_backgroundColor       = QColor("Black");

    m_handleborderWidth     = 1;
    m_handleBorderColor     = QColor("White");
    m_handleColor           = QColor(qRgb(68, 150, 47));

    m_doShowValueIndicator = true;
}

int VerticalLevelBar::level() const
{
    return m_level;
}

void VerticalLevelBar::setLevel(int level)
{
    m_level = level;
}

int VerticalLevelBar::maxLevel() const
{
    return m_maxLevel;
}

void VerticalLevelBar::setMaxLevel(int level)
{
    m_maxLevel = level;
}

void VerticalLevelBar::paintEvent(QPaintEvent *)
{

    // initialization
    if(m_doInit){
        if(m_doShowValueIndicator){
            m_textZoneHeight = 25;
        }else{
            m_textZoneHeight = 0;
        }
        m_textZoneWidth = width()-(m_borderwidth + m_borderwidth%2);

        // Text Zone
        m_levelTextRect.setX(m_borderwidth/2);
        m_levelTextRect.setY(m_borderwidth/2);
        m_levelTextRect.setWidth(m_textZoneWidth);
        m_levelTextRect.setHeight(m_textZoneHeight);

        // Back Rect
        m_backRect.setX(m_borderwidth/2);
        m_backRect.setY(m_levelTextRect.height() != 0 ? m_levelTextRect.height():m_borderwidth/2);
        m_backRect.setWidth(m_textZoneWidth);
        m_backRect.setHeight(height() - m_levelTextRect.height()- m_borderwidth);

        // min/max Y position
        if(m_borderwidth == 1 && m_handleborderWidth == 1){
            m_minYPos = m_backRect.y() + m_borderwidth ;
            m_maxYPos = height() - (2*m_Offset + 2*m_handleborderWidth);
        }else if(m_borderwidth == 1){
            m_minYPos = m_backRect.y() + m_borderwidth + m_handleborderWidth/2.0;
            m_maxYPos = height() - (2*m_Offset + m_borderwidth + m_handleborderWidth/2.0);
        }else if(m_handleborderWidth == 1){
            m_minYPos = m_backRect.y() + m_borderwidth/2.0 + m_borderwidth%2 ;
            if(m_doShowValueIndicator){
                m_maxYPos = height() - (2*m_Offset + m_handleborderWidth + 3*m_borderwidth/2.0 - m_borderwidth%2);
            }else{
                m_maxYPos = height() - (2*m_Offset + m_handleborderWidth + m_borderwidth);
            }
        }else{
            m_minYPos = m_backRect.y() + m_borderwidth/2.0 + m_handleborderWidth/2.0 + m_borderwidth%2;
            if(m_doShowValueIndicator){
                m_maxYPos = height() - (2*m_Offset + m_handleborderWidth/2 + 3*m_borderwidth/2 + m_handleborderWidth%2);
            }else{
                m_maxYPos = height() - (2*m_Offset + m_handleborderWidth/2 + m_borderwidth + m_handleborderWidth%2);
            }
        }

        // y offset
        if(m_handleborderWidth == 1 && m_borderwidth == 1){
            m_y0 = 2*m_Offset + m_handleborderWidth + m_borderwidth;
        }else if(m_borderwidth == 1){
            m_y0 = 2*m_Offset + m_handleborderWidth/2 +m_borderwidth + m_handleborderWidth%2;
        }else if(m_handleborderWidth == 1){
            if(m_doShowValueIndicator){
                m_y0 = 2*m_Offset + 3*m_borderwidth/2.0 + m_handleborderWidth - m_borderwidth%2;
            }else{
                m_y0 = 2*m_Offset + m_handleborderWidth/2 + m_borderwidth + m_handleborderWidth%2;
            }
        }else{
            if(m_doShowValueIndicator){
                m_y0 = 2*m_Offset + m_handleborderWidth/2 + 3*m_borderwidth/2 + m_handleborderWidth%2;
            }else{
                m_y0 = 2*m_Offset + m_handleborderWidth/2 + m_borderwidth + m_handleborderWidth%2;
            }
        }

        // init value
        m_yPos = convertToPos(30);

        m_doInit = false;
    }

    // Draw Text zone
    QPainter painter(this);
    m_pen.setWidth(m_borderwidth);
    m_pen.setColor(m_borderColor);
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
    painter.drawText(m_levelTextRect,Qt::AlignCenter,convertToValue(m_yPos));

    // Background Rect
    m_pen.setColor(m_borderColor);
    m_pen.setWidth(m_borderwidth);
    painter.setPen(m_pen);

    painter.setBrush(m_backgroundColor);
    painter.drawRect(m_backRect);

    // Handle
    m_handleRect.setX(m_borderwidth + m_Offset + m_handleborderWidth/2);
    m_handleRect.setWidth(m_backRect.width() - m_borderwidth - 2*m_Offset - m_handleborderWidth);
    m_handleRect.setY(height() - (m_yPos - m_Offset));
    m_handleRect.setHeight(m_yPos - m_y0);

    m_pen.setWidthF(m_handleborderWidth);
    m_pen.setColor(m_handleBorderColor);
    painter.setPen(m_pen);
    painter.setBrush(QBrush(m_handleColor));
    painter.drawRect(m_handleRect);

}

void VerticalLevelBar::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        if(event->pos().y()> (m_backRect.y() + m_Offset) && event->pos().y()<height() - m_Offset){
            m_mouseLeftButtonPressed = true;
        }
    }
    update();
}

void VerticalLevelBar::mouseMoveEvent(QMouseEvent *event)
{
    if(m_mouseLeftButtonPressed){

        if(event->pos().y() < m_minYPos){
            m_yPos = height() - m_minYPos ;
            update();
            return;
        }else if(event->pos().y() > m_maxYPos){
            m_yPos = height() - m_maxYPos;
            update();
            return;
        }

        m_yPos = height() - event->pos().y();

        update();
    }
}

void VerticalLevelBar::mouseReleaseEvent(QMouseEvent *)
{
    m_mouseLeftButtonPressed = false;
}

bool VerticalLevelBar::ShowValueIndicator() const
{
    return m_doShowValueIndicator;
}

void VerticalLevelBar::setShowValueIndicator(bool doShowValueIndicator)
{
    m_doShowValueIndicator = doShowValueIndicator;
}

QColor VerticalLevelBar::handleColor() const
{
    return m_handleColor;
}

void VerticalLevelBar::setHandleColor(const QColor &handleColor)
{
    m_handleColor = handleColor;
}

QColor VerticalLevelBar::handleBorderColor() const
{
    return m_handleBorderColor;
}

void VerticalLevelBar::setHandleBorderColor(const QColor &handleBorderColor)
{
    m_handleBorderColor = handleBorderColor;
}

int VerticalLevelBar::handleborderWidth() const
{
    return m_handleborderWidth;
}

void VerticalLevelBar::setHandleborderWidth(int handleborderWidth)
{
    m_handleborderWidth = handleborderWidth;
}

QColor VerticalLevelBar::backgroundColor() const
{
    return m_backgroundColor;
}

void VerticalLevelBar::setBackgroundColor(const QColor &backgroundColor)
{
    m_backgroundColor = backgroundColor;
}

QColor VerticalLevelBar::borderColor() const
{
    return m_borderColor;
}

void VerticalLevelBar::setBorderColor(const QColor &borderColor)
{
    m_borderColor = borderColor;
}

int VerticalLevelBar::borderwidth() const
{
    return m_borderwidth;
}

void VerticalLevelBar::setBorderwidth(int borderwidth)
{
    m_borderwidth = borderwidth;
}

QString VerticalLevelBar::convertToValue(int yPos)
{
    double a = m_maxLevel/(double)(m_maxYPos - m_minYPos);

    int value = qFloor(a * (double)(yPos - m_y0));

    QString valueString = QString("%1").arg(value);
    valueString = valueString.rightJustified(3,'0');

    return valueString;
}

int VerticalLevelBar::convertToPos(int value)
{
    double a = (double)(m_maxYPos - m_minYPos)/m_maxLevel;

    int yPos = qCeil(a * (double)value + m_y0);

    return yPos;
}
