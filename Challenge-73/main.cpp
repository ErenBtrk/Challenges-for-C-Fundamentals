#include <iostream>
#include "BaseClass.h"
#include "DerivedClass.h"
#include "IndirectDerivedClass.h"

using namespace std;

int main()
{
    BaseClass baseClass(1);
    DerivedClass derivedClass(1,2);
    IndirectDerivedClass indirectDerivedClass(1,2,3);

    cout << "Size of baseClass : " << sizeof(baseClass) << endl;
    cout << "Size of derivedClass : " << sizeof(derivedClass) << endl;
    cout << "Size of indirectDerivedClass : " << sizeof(indirectDerivedClass) << endl;
}
