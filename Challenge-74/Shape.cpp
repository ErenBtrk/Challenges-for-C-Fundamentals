#include "Shape.h"


Shape::Shape(std::string &str,double l,double b){
    setType(str);
    setLength(l);
    setBreadth(b);
}

void Shape::setType(std::string &str){
    type = str;
}

std::string Shape::getType()const{
    return type;
}

void Shape::setLength(double l){
    length = l;
}

double Shape::getLength()const{
    return length;
}

void Shape::setBreadth(double b){
    breadth = b;
}

double Shape::getBreadth()const{
    return breadth;
}

