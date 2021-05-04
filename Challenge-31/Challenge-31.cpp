#include <iostream>

using namespace std;

class Sample{
private:
    int x;
    float y;
public:
    Sample(int x,float y){
        this->x=x;
        this->y=y;
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
	Sample s1(10,41.213);
	s1.printX();
	s1.setX(20,82.426);
	s1.printX();
	s1.setX(40,82.426*2);
    s1.printX();





	return 0;
}
