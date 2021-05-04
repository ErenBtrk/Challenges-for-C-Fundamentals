#include <iostream>

using namespace std;


void swapByReference(int *number1,int *number2){
    int temp;
        temp=*number1;
        *number1=*number2;
        *number2=temp;
}

void swapByAdress(int &number1,int &number2){
    int temp;
        temp=number1;
        number1=number2;
        number2=temp;
}
int main(){
    int number1,number2;
	cout << "Enter first number: "<< endl;
	cin >> number1;
	cout << "Enter second number: " << endl;
	cin >> number2;

    cout << "Swapping by reference:" << endl;
    swapByReference(&number1,&number2);
    cout << "Number1= "<< number1 << endl;
    cout << "Number2= " << number2 << endl;

    cout << "Swapping by adress:" << endl;
    swapByAdress(number1,number2);
    cout << "Number1= "<< number1 << endl;
    cout << "Number2= " << number2 << endl;




	return 0;
}
