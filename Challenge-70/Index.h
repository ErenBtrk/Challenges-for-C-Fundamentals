#ifndef INDEX_H_INCLUDED
#define INDEX_H_INCLUDED

class Index{

public:
    Index();
    void operator++();
    void setCount(int);
    int getCount()const;
    void print()const;
private:
    int count;

};

#endif // INDEX_H_INCLUDED
