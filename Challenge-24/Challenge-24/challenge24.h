#ifndef CHALLENGE24_H_INCLUDED
#define CHALLENGE24_H_INCLUDED

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

#endif // CHALLENGE24_H_INCLUDED
