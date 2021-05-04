#include <iostream>
#include "Challenge26.h"

using namespace std;

int main(){
    Number n1;

    int number;
    cout << "Enter a number:" << endl;
    cin >> number;

    n1.setX(number);
    cout << "printX() function working:" << endl;
    n1.printX();
    cout << "Number=" << n1.getX() << endl;
    cout << "Absolute=" << n1.absoluteValue() << endl;
    if(n1.isDivisibleBy(0)){
        cout << n1.getX() << " is divisible by 0" << endl;
    }
    else{
        cout << n1.getX() << " isnt divisible by 0" << endl;
    }
    if(n1.isNegative()){
        cout << n1.getX() << " is negative." << endl;
    }
    else{
        cout << n1.getX() << " is not negative." << endl;
    }




	return 0;
}
