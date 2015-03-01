/*
 *      Face.h
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */
 
#ifndef _FACE_H_
#define _FACE_H_

#include "Row.h"

class Face
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
        
        
};

#endif /* _FACE_H_ */
