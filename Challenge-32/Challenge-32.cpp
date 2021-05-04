#include <iostream>

using namespace std;

class Sample{
private:
    int x;
    float y;
public:
    Sample(){
        this->x=0;
        this->y=0.0;
    }
    Sample(int x,float y){
        this->x=x;
        this->y=y;
    }
    Sample(string x){
        cout << x << endl;
        this->x=44;
        this->y=44.44;
    }
    void setX(int x,float y){
        this->x=x;
        this->y=y;
    }
    void printX(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }


};

int main(){
	Sample s1;
	s1.printX();
	Sample s2("Introduction");
	s2.printX();
	Sample s3(31,31.31);
    s3.printX();




	return 0;
}
