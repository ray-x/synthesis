#ifndef DOUBLESIDEDVERTICALBAR_H
#define DOUBLESIDEDVERTICALBAR_H

#include <QWidget>
#include <QPen>
#include <QPainter>
#include <QMouseEvent>

class DoubleSidedVerticalBar : public QWidget
{
    Q_OBJECT


public:
    explicit DoubleSidedVerticalBar(QWidget *parent = 0);

    QColor HandleColor() const;
    void setHandleColor(const QColor &HandleColor);

protected:
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *);

    int minValue() const;
    void setMinValue(const int value);

    int maxValue() const;
    void setMaxValue(const int value);

    int topValue() const;
    void setTopValue(const int value);

    int bottomValue() const;
    void setBottomValue(const int value);

private:
    bool    m_mouseLeftButtonPressed;       // Whether the the left mouse button is pressed
    bool    m_topBottom;                    // true: Top, false: Bottom
    bool    m_doInit;                       // Enable the initialization loop
    double  m_yTop;                         // top value (pixels)
    double  m_yBottom;                      // bottom value (pixels)

    int     m_topValue;                     // top value
    int     m_bottomValue;                  // bottom value

    double  m_minValue;                     // Dimension min value
    double  m_maxValue;                     // Dimension max value

    QRectF  m_markerRect;                   // Marker rectangle
    QRectF  m_backRect;                     // Backgroung rectangle
    QRect   m_minNumRect;                   // Rectangle for min value
    QRect   m_maxNumRect;                   // Rectangle for max value

    QPen    m_pen;                          // Drawing pen
    QColor  m_HandleColor;                  // Handle Color

    int     m_textZoneHeight;               // Height of the min value rectangle
    int     m_textZoneWidth;                // width  of the max value rectangle

    double  m_markerOffset;                 // Offset between the background rectangle and marking rectangle top edges

    int convertToValue(int yPos);           // convert the y mouse position to dimension value
    int convertToYpos(int value);           // convert the value to the position of the bar.



signals:
    void topValueChanged(int value);
    void bottomValueChanged(int value);

public slots:

};

#endif // DOUBLESIDEDVERTICALBAR_H
