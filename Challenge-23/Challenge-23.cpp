#include <iostream>

using namespace std;

class Number{
private:
    int x;
public:
    void setX(int x);
    int getX();
    void printX();
    bool isNegative();
    bool isDivisibleBy(int n);
    int absoluteValue();
};

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
