#include "myrect.h"
#include <QColor>
#include <QPen>
#include <QPainter>

MyRect::MyRect(QQuickItem *parent)
    :QQuickPaintedItem(parent)
{ }

QColor MyRect::color()const
{
    return m_color;
}
void MyRect::setColor(const QColor &color)
{
    if(color != m_color)
        m_color = color;
    //emit(colorChanged);
}

void MyRect::paint(QPainter *painter)
{
    QPen pen(m_color, 2);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);
    painter->drawRect(0, 0, 50, 50);
}
