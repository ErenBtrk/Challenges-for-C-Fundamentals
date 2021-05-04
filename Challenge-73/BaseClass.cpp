#include "BaseClass.h"
#include <iostream>

BaseClass::BaseClass(int x){
    std::cout << "In BaseClass's constructor." << std::endl;
    setX(x);
}

void BaseClass::setX(int x){
    this->x = x;
}

int BaseClass::getX()const{
    return x;
}
