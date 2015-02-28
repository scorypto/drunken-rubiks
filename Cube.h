/*
 *      Cube.h
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */
 
#ifndef _CUBE_H_
#define _CUBE_H_

#include "Row.h"

class Cube
{
    private:
        Row topRow;
        Row middleRow;
        Row bottomRow;
        
    public:
        Row getTopRow() const;
        void setTopRow(Sqaure topRow);
        
        Row getMiddleRow() const;
        void setMiddleRow(Sqaure middleRow);
        
        Row getBottomRow() const;
        void setBottomRow(Sqaure bottomRow);
        
        
}

#endif /* _CUBE_H_ */
