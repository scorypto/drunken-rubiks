/*
 *      Square.h
 *      Author : Scorypto
 *      Created at : 28 Feb, 2015
 *
 */

#ifndef _SQUARE_H_
#define _SQUARE_H_

class Square {
private:
    int color;

public:
    Square(int color);
    int getColor() const;
    void setColor(int color);
};

#endif /* _SQUARE_H_ */
