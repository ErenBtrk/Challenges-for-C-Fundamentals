#include <iostream>
#include <math.h>

using namespace std;

class ComplexNumbers{
private:
    double real;
    double imag;
public:
    ComplexNumbers(){
        this->real=0;
        this->imag=0;
    }
    ComplexNumbers(double real,double imag){
        this->real=real;
        this->imag=imag;
    }
    ComplexNumbers(const ComplexNumbers &copying){
        this->real=copying.real;
        this->imag=copying.imag;
    }
    ComplexNumbers addition(ComplexNumbers num1){
        ComplexNumbers sum;
        sum.imag=imag+num1.imag;
        sum.real=real+num1.real;
        return sum;
    }
    ComplexNumbers substraction(ComplexNumbers num1){
        ComplexNumbers sum;
        sum.imag=imag-num1.imag;
        sum.real=real-num1.real;
        return sum;
    }
    ComplexNumbers multiply(ComplexNumbers num1){
        ComplexNumbers sum;
        sum.imag=real*num1.imag+imag*num1.real;
        sum.real=real*num1.real-imag*num1.imag;
        return sum;
    }
    ComplexNumbers divide(ComplexNumbers num1){
        ComplexNumbers sum;

        double mods=num1.mod();
        ComplexNumbers conj=num1.conjugate();

        if(mods == 0){
            cout << "Unable to divide complex numbers" << endl;
        }
        else{
            sum=this->multiply(conj);
            sum.real=sum.real/mods;
            sum.imag=sum.imag/mods;
        }
        return sum;
    }
    ComplexNumbers conjugate(){
        ComplexNumbers conj;
        conj.real=real;
        conj.imag=-imag;
        return conj;
    }
    double mod(){
        double mod2=real*real+imag*imag;
        return sqrt(mod2);
    }
    void display(){
        cout << "Real part = "<< real << endl;
        cout << "Imag part = "<< imag << endl;
        cout << endl;
    }

};

int main(){
    ComplexNumbers a=ComplexNumbers(2,3);
    ComplexNumbers b(6,-1);
    cout << "a : " << endl;
    a.display();
    cout << "b : " << endl;
    b.display();
    cout << "a+b : " << endl;
    ComplexNumbers c=a.addition(b);
    cout << "Sum : " << endl;
    c.display();
    cout << "a-b : " << endl;
    ComplexNumbers d=a.substraction(b);
    cout << "Difference : " << endl;
    d.display();
    cout << "a*b : " << endl;
    ComplexNumbers e=a.multiply(b);
    cout << "Product : " << endl;
    e.display();
    cout << "a/b : " << endl;
    ComplexNumbers f=a.divide(b);
    cout << "Quotient :" << endl;
    f.display();




	return 0;
}
