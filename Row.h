/*
 *      Row.h
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */
 
#ifndef _ROW_H_
#define _ROW_H_

#include "Square.h"

class Row
{
    private:
        Square leftSquare;
        Square centerSquare;
        Square rightSquare;
        
    public:
        Square getLeftSquare() const;
        void setLeftSquare(Sqaure leftSquare);
        
        Square getCenterSquare() const;
        void setCenterSquare(Sqaure centerSquare);
        
        Square getRightSquare() const;
        void setRightSquare(Sqaure rightSquare);
        
        
}


#endif /* _ROW_H_ */
