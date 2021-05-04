#include "Circle.h"
#include "Utility.h"
#include <math.h>
#include <iostream>


Circle::Circle( int r){
    radius = r;
}



void Circle::draw()const{


    const int width=radius;
    const int length=radius*1.5;

    for (int y=width;y >= -width;y-=2)  {
        for (int x=-length;x <= length;x++)  {

            if ((int) pth(x,y)==radius) std::cout << "*";
            else std::cout << " ";

         }
         std::cout << "\n";
     }


}
