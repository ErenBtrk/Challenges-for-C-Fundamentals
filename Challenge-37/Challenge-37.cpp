#include <iostream>

using namespace std;

class Number{
private:
    int x;
    string s;
public:
    Number(){
        this->x=0;
        this->s="Bos string";
    }
    Number(int x,string s){
        this->x=x;
        this->s=s;
    }
    Number(const Number &kopya){
        this->x=kopya.x;
        this->s=kopya.s;
    }
    void setData(Number n){
        this->x=n.x;
        this->s=n.s;
    }
    int getX(){
        return this->x;
    }
    string getS(){
        return this->s;
    }
    void printDetails(){
        cout << x << " " << s << endl;
    }


};

Number fun(){
    Number n;
    return n;
}
int main(){
	Number n1(120,"Yarasa");
	n1.printDetails();
	Number n2=n1;
	n2.printDetails();
	Number n3;
	n3.setData(n2);
    n3.printDetails();
	Number n4=fun();
	n4.printDetails();







	return 0;
}
