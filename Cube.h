/*
 *      Cube.h
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */
 
#ifndef _CUBE_H_
#define _CUBE_H_

#include "Face.h"

class Face
{
    private:
        Face topFace;
        Face bottomFace;
        Face leftFace;
        Face rightFace;
        Face frontFace;
        Face backFace;
        
    public:
        Face getTopFace() const;
        void setTopFace(Sqaure topFace);
        
        Face getBottomFace() const;
        void setBottomFace(Sqaure bottomFace);
        
        Face getLeftFace() const;
        void setLeftFace(Sqaure leftFace);
        
        Face getRightFace() const;
        void setRightFace(Sqaure rightFace);
        
        Face getFrontFace() const;
        void setFrontFace(Sqaure frontFace);
        
        Face getBackFace() const;
        void setBackFace(Sqaure backFace);
        
}

#endif b* _CUBE_H_ */
