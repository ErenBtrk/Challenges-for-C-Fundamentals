#include <iostream>
#include "Index.h"
#include "Index1.h"

using namespace std;

int main()
{
    Index1 index1;
    index1.print();
    ++index1;
    index1.print();
    ++index1;
    index1.print();
    ++index1;
    index1.print();
    --index1;
    index1.print();
    --index1;
    index1.print();
    --index1;
    index1.print();

}
