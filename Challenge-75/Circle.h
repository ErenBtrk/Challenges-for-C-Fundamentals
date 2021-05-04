#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Shape.h"

using namespace std;

class Circle: public Shape{
public:
    Circle(int);
    virtual ~Circle(){};
    virtual void draw()const override;
private:
    int radius;
};



#endif // CIRCLE_H_INCLUDED
