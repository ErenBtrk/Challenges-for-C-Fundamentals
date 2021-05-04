#include "Index1.h"
#include <iostream>

Index1::Index1():Index(){}

void Index1::operator--(){
    int x;
    x = Index::getCount();
    Index::setCount(--x);
}

