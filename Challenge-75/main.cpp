#include <iostream>
#include <vector>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int randomLength = 0;
    int randomBreadth = 0;
    int randomRadius = 0;
    vector < Shape* > shapes(10);
    for( size_t i = 0 ; i < 10 ; i++ ){
        randomLength = 5+rand()%20;
        randomBreadth = 5+rand()%20;
        randomRadius = 5+rand()%20;
        shapes[i++] = new Rectangle(randomLength,randomBreadth);
        shapes[i] = new Circle(randomRadius);
    }
    for( Shape *shapePtr : shapes ){
        shapePtr->draw();
    }




}
