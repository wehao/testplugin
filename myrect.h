#ifndef MYRECT_H
#define MYRECT_H

#include <QtQuick/QQuickPaintedItem>

class MyRect : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)

public:
    MyRect(QQuickItem *parent = 0);

    QColor color()const;
    void setColor(const QColor &color);

protected:
    void paint(QPainter *painter);

private:
    QColor m_color;

signals:
    void colorChanged();
};

#endif // MYRECT_H
