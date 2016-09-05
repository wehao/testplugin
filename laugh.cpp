#include "laugh.h"
#include <QColor>
#include <QPen>
#include <QPainter>

Laugh::Laugh(QQuickItem *parent)
    :QQuickPaintedItem(parent)
{ }

QColor Laugh::color()const
{
    return m_color;
}
void Laugh::setColor(const QColor &color)
{
    if(color != m_color)
        m_color = color;
    //emit(colorChanged);
}

void Laugh::paint(QPainter *painter)
{
    QPen pen(m_color, 2);
    painter->setPen(pen);
    painter->setRenderHints(QPainter::Antialiasing, true);
    painter->drawEllipse(QRect(0,0,300,300));
    painter->drawArc(50,50,100,100,30 * 16,120 * 16);
    painter->drawArc(150,50,100,100,30 * 16,120 * 16);
    painter->drawArc(100,170,100,80,-0,-2880);
}
