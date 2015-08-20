#ifndef VERTICALLEVELBAR_H
#define VERTICALLEVELBAR_H

#include <QWidget>
#include<QPen>

class VerticalLevelBar : public QWidget
{
    Q_OBJECT
public:
    explicit VerticalLevelBar(QWidget *parent = 0);

    int     level() const;
    void    setLevel(int level);

    int     maxLevel() const;
    void    setMaxLevel(int level);

    int     borderwidth() const;
    void    setBorderwidth(int borderwidth);

    QColor  borderColor() const;
    void    setBorderColor(const QColor &borderColor);

    QColor  backgroundColor() const;
    void    setBackgroundColor(const QColor &backgroundColor);

    int     handleborderWidth() const;
    void    setHandleborderWidth(int handleborderWidth);

    QColor  handleBorderColor() const;
    void    setHandleBorderColor(const QColor &handleBorderColor);

    QColor  handleColor() const;
    void    setHandleColor(const QColor &handleColor);

    bool    ShowValueIndicator() const;
    void    setShowValueIndicator(bool ShowValueIndicator);

protected:
    void    paintEvent(QPaintEvent *);
    void    mousePressEvent(QMouseEvent *event);
    void    mouseMoveEvent(QMouseEvent *event);
    void    mouseReleaseEvent(QMouseEvent *);

private:

    bool    m_mouseLeftButtonPressed;           // Whether the the left mouse button is pressed

    bool    m_doInit;                           // Enable the initialization loop
    int     m_yPos;                             // bar position
    int     m_maxYPos;                          // min y value
    int     m_minYPos;                          // max y value

    int     m_y0;                               // y offset

    int     m_level;                            // level value
    int     m_maxLevel;                         // max level value

    int     m_textZoneHeight;                   // Height of the min value rectangle
    int     m_textZoneWidth;                    // Width  of the max value rectangle

    QRectF  m_handleRect;                       // Marker rectangle
    QRectF  m_backRect;                         // Backgroung rectangle
    QRect   m_levelTextRect;                    // Rectangle for level

    QPen    m_pen;                              // Drawing pen

    double  m_Offset;                           // Offset between the background rectangle and marking rectangle top edges

    int     m_borderwidth;                      // border width
    QColor  m_borderColor;                      // border color
    QColor  m_backgroundColor;                  // background Color

    int     m_handleborderWidth;                // handle border width
    QColor  m_handleBorderColor;                // handle border color
    QColor  m_handleColor;                      // handle color

    bool    m_doShowValueIndicator;             // whether to show the value indicator or not

    QString convertToValue(int yPos);           // Convert the x mouse position to value
    int     convertToPos(int value);            // Convert the value to x mouse position


signals:

public slots:

};

#endif // VERTICALLEVELBAR_H
