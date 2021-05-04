#include <iostream>

using namespace std;

long long int factorial(int num){
    if(num==0){
        return 1;
    }
    return num*factorial(num-1);
}

int howManyZeros(int num){
    long long int f=factorial(num);
    if(num==0){
        cout << "FACTORIAL of "<< num << "!= " << f << endl;
        return 1;
    }
    cout << "FACTORIAL of " << num << "!= " << f << endl;
    int digit;
    int cou=0;
    while(f != 0){
        digit=f%10;
        f=f/10;
        if(digit == 0){
            cou++;
        }
        else{
            break;
        }
    }
        return cou;

}

int main(){
	int num;
    cout << "Enter a number to count it's factorial:" << endl;
    cin >> num;


    cout << howManyZeros(num)   << " = number of zeros at the end of the number you have entered." << endl;





	return 0;
}
