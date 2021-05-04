#include "DerivedClass.h"
#include <iostream>

DerivedClass::DerivedClass(int x,int y)
                                        :BaseClass(x){
                                            std::cout << "In DerivedClass's constructor." << std::endl;
                                            setY(y);
                                        }

void DerivedClass::setY(int y){
    this->y = y;
}

int DerivedClass::getY()const{
    return y;
}
