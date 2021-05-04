#include "dllheader.h"
#include <iostream>

using namespace std;

void Number:: setX(int x){
        this->x=x;
}

int Number::getX(){
        return x;
}

void Number:: printX(){
    cout << this->x << endl;
}

bool Number::isNegative(){
    if(this->x < 0){
        return true;
    }
    else{
        return false;
    }
}

bool Number:: isDivisibleBy(int n){
        if(n == 0){
            return false;
        }
        if(this->x % n == 0){
            return true;
        }
        else{
            return false;
        }
}

 int Number::absoluteValue(){
        return abs(this->x);
}



