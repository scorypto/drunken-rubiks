/*
 *      Cube.cpp
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */
 
#include "Cube.h"

Row Cube::getTopRow() const
{
    return topRow;
}

void Cube::setTopRow(int topRow)
{
    this.topRow = topRow;
}

Row Cube::getMiddleRow() const
{
    return middleRow;
}

void Cube::setMiddleRow(int middleRow)
{
    this.middleRow = middleRow;
}

Row Cube::getBottomRow() const
{
    return bottomRow;
}

void Cube::setBottomRow(int bottomRow)
{
    this.bottomRow = bottomRow;
}