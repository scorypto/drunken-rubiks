/*
 *      Cube.cpp
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */
 
#include "Cube.h"

Face Cube::getTopFace() const
{
    return topFace;
}

void Cube::setTopFace(int topFace)
{
    this.topFace = topFace;
}

Face Cube::getBottomFace() const
{
    return bottomFace;
}

void Cube::setBottomFace(int bottomFace)
{
    this.bottomFace = bottomFace;
}

Face Cube::getLeftFace() const
{
    return leftFace;
}

void Cube::setLeftFace(int leftFace)
{
    this.leftFace = leftFace;
}

Face Cube::getRightFace() const
{
    return rightFace;
}

void Cube::setRightFace(int rightFace)
{
    this.rightFace = rightFace;
}

Face Cube::getFrontFace() const
{
    return frontFace;
}

void Cube::setFrontFace(int frontFace)
{
    this.frontFace = frontFace;
}

Face Cube::getBackFace() const
{
    return backFace;
}

void Cube::setBackFace(int backFace)
{
    this.backFace = backFace;
}
