#include <iostream>

using namespace std;

class Sample{
};

class Number{
private:
    int x;
public:
    Number(){
        this->x=44;
    }
    void printX(){
        cout << this->x << endl;
    }

};

int main(){
	Number n1;
	n1.printX();
    Sample s1;





	return 0;
}
