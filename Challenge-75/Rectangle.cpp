#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int l,int b):length(l),breadth(b){}

void Rectangle::draw()const{
   for( int i = 0 ; i < length ; i++ ){
        for( int j = 0 ; j < breadth ; j++ ){
            if( i == 0 || i == length - 1 || j == 0 || j == breadth - 1 ){
                std::cout << '*' ;
            }
            else{
                std::cout << ' ';
            }
        }
        std::cout << std::endl;
   }
}
