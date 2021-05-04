#ifndef DLLHEADER_H_INCLUDED
#define DLLHEADER_H_INCLUDED

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

#endif // DLLHEADER_H_INCLUDED
