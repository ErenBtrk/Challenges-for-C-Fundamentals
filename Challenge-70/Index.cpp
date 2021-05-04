#include "Index.h"
#include <iostream>

Index::Index():count(0){}

void Index::operator++(){
    this->count++;
}

void Index::setCount(int x ){
    this->count = x;
}

int Index::getCount()const{
    return count;
}

void Index::print()const{
    std::cout << count << std::endl;
}
