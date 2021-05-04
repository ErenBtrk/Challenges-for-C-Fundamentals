#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#include <string>

class Shape{
public:
    Shape(std::string &,double,double);
    void setType(std::string &);
    std::string getType()const;
    void setLength(double);
    double getLength()const;
    void setBreadth(double);
    double getBreadth()const;
private:
    std::string type;
    double length;
    double breadth;

};


#endif // SHAPE_H_INCLUDED
