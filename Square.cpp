/*
 *      Square.cpp
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */

#include "Square.h"

Square::Square(int color)
{
    LOG(INFO) << "Creating Sqaure Object with value as :: " << color;
    setColor(color);
}

int Square::getColor() const
{
    return color;
}

void Square::setColor(int color)
{
    this->color = color;
}