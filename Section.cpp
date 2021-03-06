#include "Section.h"

#include <QPen>

Section::Section() : QGraphicsRectItem(0,0,90,100)
{

}

int Section::getColumn() const
{
    return column;
}

void Section::setColumn(int value)
{
    column = value;
}

void Section::setPlant(Plants *value)
{
    QObject::connect(value,SIGNAL(plantRemoved()),this,SLOT(removePlant()));
    plant = value;
}

void Section::destroy()
{
    if(!isEmpty()) {
        delete plant;
        plant = nullptr;
    }
}

void Section::removePlant()
{
    plant = nullptr;
}

int Section::getRow() const
{
    return row;
}

void Section::setRow(int value)
{
    row = value;
}
