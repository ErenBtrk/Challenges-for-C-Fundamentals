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

int main()
{
    Number n1;
    n1.setX(5);
    n1.printX();

    return 0;
}
