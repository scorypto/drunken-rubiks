/*
 *      Face.cpp
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */
 
#include "Face.h"

Row Face::getTopRow() const
{
    return topRow;
}

void Face::setTopRow(int topRow)
{
    this.topRow = topRow;
}

Row Face::getMiddleRow() const
{
    return middleRow;
}

void Face::setMiddleRow(int middleRow)
{
    this.middleRow = middleRow;
}

Row Face::getBottomRow() const
{
    return bottomRow;
}

void Face::setBottomRow(int bottomRow)
{
    this.bottomRow = bottomRow;
}