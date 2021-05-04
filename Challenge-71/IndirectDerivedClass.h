#ifndef INDIRECTDERIVEDCLASS_H_INCLUDED
#define INDIRECTDERIVEDCLASS_H_INCLUDED
#include "DerivedClass.h"

class IndirectDerivedClass : public DerivedClass{
public:
    IndirectDerivedClass(int,int,int);
    void setZ(int);
    int getZ()const;
private:
    int z;
};

#endif // INDIRECTDERIVEDCLASS_H_INCLUDED
