#ifndef LAUGH_H
#define LAUGH_H

#include <QtQuick/QQuickPaintedItem>

class Laugh : public QQuickPaintedItem
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color WRITE setColor NOTIFY colorChanged)

public:
    Laugh(QQuickItem *parent = 0);

    QColor color()const;
    void setColor(const QColor &color);

protected:
    void paint(QPainter *painter);

private:
    QColor m_color;

signals:
    void colorChanged();
};

#endif // LAUGH_H
