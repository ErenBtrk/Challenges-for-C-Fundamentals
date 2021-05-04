#ifndef DERIVEDCLASS_H_INCLUDED
#define DERIVEDCLASS_H_INCLUDED
#include "BaseClass.h"

class DerivedClass : public BaseClass{
public:
    DerivedClass(int,int);
    void setY(int);
    int getY()const;
private:
    int y;
};


#endif // DERIVEDCLASS_H_INCLUDED
