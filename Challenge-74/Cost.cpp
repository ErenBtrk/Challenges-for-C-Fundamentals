#include "Cost.h"

double Cost::getCost(std::string &type,int quantity)const{
    if( type == "plate" ){
        return quantity * 50;
    }
    else if(type == "ring" ){
        return quantity * 22;
    }
    else{
        return -1;
    }
}
