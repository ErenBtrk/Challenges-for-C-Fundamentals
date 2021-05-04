#include <iostream>
#include "Rectangle.h"


using namespace std;

int main()
{
    string s1 = "plate" ;
    string s2 = "ring" ;
    Rectangle r1(s1,10,20);
    cout << "Rectangle 1 : " << endl;
    string str = r1.getType();
    cout << r1.getQuantity() << "   " << r1.getCost( str , r1.getQuantity() ) << endl;

    Rectangle r2(s2,10,20);
    cout << "Rectangle 2 : " << endl;
    str = r2.getType();
    cout << r2.getQuantity() << "   " << r2.getCost( str, r2.getQuantity() ) << endl;
}
