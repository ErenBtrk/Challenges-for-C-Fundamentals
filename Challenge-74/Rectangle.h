#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <string>
#include "Shape.h"
#include "Cost.h"

class Rectangle:public Shape,public Cost{
public:
    Rectangle(std::string &,double,double);
    int getQuantity()const;
private:

};

#endif // RECTANGLE_H_INCLUDED
