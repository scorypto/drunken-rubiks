/*
 *      Row.cpp
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */
 
#include "Row.h"

Square Row::getLeftSquare() const
{
    return leftSquare;
}

void Row::setLeftSquare(int leftSquare)
{
    this.leftSquare = leftSquare;
}

Square Row::getCenterSquare() const
{
    return centerSquare;
}

void Row::setCent

Square(int centerSquare)
{
    this.centerSquare = centerSquare;
}

Square Row::getRightSquare() const
{
    return rightSquare;
}

void Row::setRightSquare(int rightSquare)
{
    this.rightSquare = rightSquare;
}