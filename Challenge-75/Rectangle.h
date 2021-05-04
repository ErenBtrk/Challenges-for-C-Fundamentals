#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
#include "Shape.h"

class Rectangle : public Shape{
public:
    Rectangle(int,int);
    virtual ~Rectangle(){};
    virtual void draw() const override;
private:
    int length;
    int breadth;


};


#endif // RECTANGLE_H_INCLUDED
