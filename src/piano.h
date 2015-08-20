#ifndef PIANO_H
#define PIANO_H

#include <QWidget>
#include <QPair>

class Piano : public QWidget
{
    Q_OBJECT
public:
    explicit Piano(QWidget *parent = 0);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *);

private:
    QList<QPair<QString, QRectF *> > m_whiteKeyList;
    QList<QPair<QString, QRectF *> > m_blackKeyList;

    double  m_blackKeyWidth;
    double  m_whiteKeyWidth;

    QRectF  m_leftUnselectedRect;
    QRectF  m_rightInselectedRect;

    double  m_leftUnselectedRectWidth;
    double  m_rightInselectedRectWidth;
    double  m_firstxPos;

    bool    m_leftbuttonClicked;

signals:
    void leftKeySelected(QString leftKey);
    void rightKeySelected(QString rightKey);

public slots:

};

#endif // PIANO_H
