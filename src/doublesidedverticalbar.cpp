#include "doublesidedverticalbar.h"
#include <QDebug>
#include "qmath.h"

DoubleSidedVerticalBar::DoubleSidedVerticalBar(QWidget *parent) :
    QWidget(parent)
{
    m_mouseLeftButtonPressed = false;
    m_topBottom = true;

    m_doInit = true;

    m_pen.setWidth(1);

    m_minValue = 0;
    m_maxValue = 127;

    m_topValue = 30;
    m_bottomValue = 70;

    m_markerOffset = 3;

    m_HandleColor = QColor(qRgb(68, 150, 47));

}

void DoubleSidedVerticalBar::paintEvent(QPaintEvent *)
{
    // initialization
    if(m_doInit){
        m_textZoneHeight = 20;
        m_textZoneWidth = width()-2;

        m_yTop = convertToYpos(m_topValue);
        m_yBottom = convertToYpos(m_bottomValue);

        // Text Zone
        m_minNumRect.setX(0);
        m_minNumRect.setY(0);
        m_minNumRect.setWidth(m_textZoneWidth);
        m_minNumRect.setHeight(m_textZoneHeight);

        m_maxNumRect.setX(0);
        m_maxNumRect.setY(height()-m_textZoneHeight-1);
        m_maxNumRect.setWidth(m_textZoneWidth);
        m_maxNumRect.setHeight(m_textZoneHeight);

        // Background Rect
        m_backRect.setX(0);
        m_backRect.setY(m_textZoneHeight);
        m_backRect.setWidth(width()-2*m_pen.width());
        m_backRect.setHeight(height()-m_pen.width()-(2*m_textZoneHeight));

        m_doInit = false;
    }

    m_pen.setColor(QColor("White"));
    m_pen.setWidth(1);

    // Draw Text zone
    QPainter painter(this);
    painter.setPen(m_pen);
    painter.setBrush(QColor(qRgb(141, 141, 141)));
    painter.drawRect(m_minNumRect);
    painter.drawRect(m_maxNumRect);

    // Fill Text zone
    m_pen.setColor(QColor("Black"));
    painter.setPen(m_pen);
    QFont font;
    font.setFamily("Electron");
    font.setPointSize(8);
    font.setBold(true);
    painter.setFont(font);

    QString topValueStr =  QString("%1").arg(convertToValue(m_yTop));
    topValueStr = topValueStr.rightJustified(3,'0');

    painter.drawText(m_minNumRect,Qt::AlignCenter,topValueStr);

    QString bottomValueStr =  QString("%1").arg(convertToValue(m_yBottom));
    bottomValueStr = bottomValueStr.rightJustified(3,'0');

    painter.drawText(m_maxNumRect,Qt::AlignCenter,bottomValueStr);

    m_pen.setColor(QColor("White"));
    painter.setPen(m_pen);

    // Draw Background Rect
    painter.setBrush(QBrush(QColor("Black")));
    painter.drawRect(m_backRect);

    // Green marker
    m_markerRect.setX(3);
    m_markerRect.setY(m_yTop);
    m_markerRect.setWidth(width()-2-2*3);
    m_markerRect.setHeight(m_yBottom - m_yTop);

    painter.setBrush(QBrush(m_HandleColor));
    painter.drawRect(m_markerRect);


}

void DoubleSidedVerticalBar::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        if(event->pos().y()>21 && event->pos().y()<(m_yBottom + m_yTop)/2){
            m_mouseLeftButtonPressed = true;
            m_topBottom = true;

        }else if(event->pos().y() < (height() - 21) && event->pos().y()>(m_yBottom + m_yTop)/2){
            m_mouseLeftButtonPressed = true;
            m_topBottom = false;
        }
    }
    update();

}

void DoubleSidedVerticalBar::mouseMoveEvent(QMouseEvent *event)
{
    if(m_mouseLeftButtonPressed){
        if(m_topBottom){
            if(event->pos().y() > m_yBottom){
                m_yTop = m_yBottom;

                update();
                return;
            }else if(event->pos().y() < (m_textZoneHeight + m_markerOffset)){
                m_yTop = m_textZoneHeight + m_markerOffset;
                update();
                return;
            }

            m_yTop = event->pos().y();

        }else{
            if(event->pos().y() < m_yTop){
                m_yBottom = m_yTop;
                update();
                return;
            }else if(event->pos().y() >(height()-(m_textZoneHeight + m_markerOffset + m_pen.width()))){
                m_yBottom = height() - (m_textZoneHeight + m_markerOffset + m_pen.width());
                update();
                return;
            }
            m_yBottom = event->pos().y();

        }
        update();
    }

}

void DoubleSidedVerticalBar::mouseReleaseEvent(QMouseEvent *)
{
    if(m_topBottom){
        setTopValue(convertToValue(m_yTop));
    }else{
        setBottomValue(convertToValue(m_yBottom));
    }


    m_mouseLeftButtonPressed = false;
}

int DoubleSidedVerticalBar::minValue() const
{
    return m_minValue;
}

void DoubleSidedVerticalBar::setMinValue(const int value)
{
    m_minValue = value;

    if(m_topValue < m_minValue){
        setTopValue(m_minValue);
    }

}

int DoubleSidedVerticalBar::maxValue() const
{
    return m_maxValue;
}

void DoubleSidedVerticalBar::setMaxValue(const int value)
{
    m_maxValue = value;

    if(m_bottomValue > m_maxValue){
        setBottomValue(m_maxValue);
    }

}

int DoubleSidedVerticalBar::topValue() const
{
    return m_topValue;
}

void DoubleSidedVerticalBar::setTopValue(const int value)
{
    if(value < m_minValue){
        m_topValue = m_minValue;
    }else if(value > m_bottomValue){
        m_topValue = m_bottomValue;
    }else{
        m_topValue = value;
    }

    emit topValueChanged(m_topValue);
    update();
}

int DoubleSidedVerticalBar::bottomValue() const
{
    return m_bottomValue;
}

void DoubleSidedVerticalBar::setBottomValue(const int value)
{
    if(value > m_maxValue){
        m_bottomValue = m_maxValue;
    }else if(value < m_topValue){
        m_bottomValue = m_topValue;
    }else{
        m_bottomValue = value;
    }

    emit bottomValueChanged(m_bottomValue);
    update();
}
QColor DoubleSidedVerticalBar::HandleColor() const
{
    return m_HandleColor;
}

void DoubleSidedVerticalBar::setHandleColor(const QColor &HandleColor)
{
    m_HandleColor = HandleColor;
}


int DoubleSidedVerticalBar::convertToValue(int yPos)
{
    double a = (m_maxValue - m_minValue)/(height()-2*(m_textZoneHeight + m_markerOffset + m_pen.width()));
    double b = m_minValue;

    int value = qCeil(a * (double)(yPos - (m_textZoneHeight + m_markerOffset + m_pen.width())) + b);

    return value;

}

int DoubleSidedVerticalBar::convertToYpos(int value)
{
    double a = (height()-2*(m_textZoneHeight + m_markerOffset + m_pen.width()))/(m_maxValue - m_minValue);
    double b = m_minValue;

    int yPos = a*(value-b) + (m_textZoneHeight + m_markerOffset + m_pen.width());

   return yPos;
}
