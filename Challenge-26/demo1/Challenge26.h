#ifndef CHALLENGE26_H_INCLUDED
#define CHALLENGE26_H_INCLUDED

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

#endif // CHALLENGE26_H_INCLUDED
