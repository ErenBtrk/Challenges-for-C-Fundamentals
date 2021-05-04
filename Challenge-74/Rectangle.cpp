#include "Rectangle.h"

Rectangle::Rectangle(std::string &str,double l,double b)
                                :Shape(str,l,b){}

int Rectangle::getQuantity()const{
    if( Shape::getType() == "plate" ){
        return Shape::getLength() * Shape::getBreadth();
    }
    else if( Shape::getType() == "ring" ){
        return ( Shape::getLength() + Shape::getBreadth() ) * 2;
    }
    else{
        return -1;
    }
}
