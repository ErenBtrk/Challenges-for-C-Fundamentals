#include <iostream>

using namespace std;

class Number{
private:
    int x;
    string s;
public:
    Number(int x,string s){
        this->x=x;
        this->s=s;
    }
    Number(const Number &kopya){
        this->x=kopya.x;
        this->s=kopya.s;
    }
    void printDetails(){
        cout << x << " " << s << endl;
    }


};

int main(){
	Number n1(45,"Yarasa");
	n1.printDetails();
	Number n2(n1);
    n2.printDetails();
    Number n3=n2;
    n3.printDetails();




	return 0;
}
