#ifndef HORIZONTALLEVELBAR_H
#define HORIZONTALLEVELBAR_H

#include <QWidget>
#include<QPen>

class HorizontalLevelBar : public QWidget
{
    Q_OBJECT
public:
    explicit HorizontalLevelBar(QWidget *parent = 0);

    int     level() const;
    void    setLevel(int level);
    int     maxLevel() const;
    void    setMaxLevel(int level);

protected:
    void    paintEvent(QPaintEvent *);
    void    mousePressEvent(QMouseEvent *event);
    void    mouseMoveEvent(QMouseEvent *event);
    void    mouseReleaseEvent(QMouseEvent *);

private:

    bool    m_mouseLeftButtonPressed;       // Whether the the left mouse button is pressed

    bool    m_doInit;                       // Enable the initialization loop
    double  m_xPos;                         // bar Position

    int     m_level;
    int     m_maxLevel;

    int     m_textZoneHeight;               // Height of the min value rectangle
    int     m_textZoneWidth;                // width  of the max value rectangle

    QRectF  m_markerRect;                   // Marker rectangle
    QRectF  m_backRect;                     // Backgroung rectangle
    QRect   m_levelTextRect;                // Rectangle for level

    QPen    m_pen;                          // Drawing pen

    double  m_markerOffset;                 // Offset between the background rectangle and marking rectangle top edges


    QString convertToValue(int xPos);       // convert the x mouse position to value
    int convertToPos(int value);            // convert the value to x mouse position

signals:

public slots:

};

#endif // HORIZONTALLEVELBAR_H
