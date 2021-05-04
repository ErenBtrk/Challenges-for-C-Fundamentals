#include "IndirectDerivedClass.h"
#include <iostream>


IndirectDerivedClass::IndirectDerivedClass(int x ,int y,int z)
                                                                :DerivedClass(x,y){
                                                                    std::cout << "In IndirectDerivedClass's constructor." << std::endl;
                                                                    setZ(z);
                                                                }

void IndirectDerivedClass::setZ(int z){
    this->z = z;
}

int IndirectDerivedClass::getZ()const{
    return z;
}
