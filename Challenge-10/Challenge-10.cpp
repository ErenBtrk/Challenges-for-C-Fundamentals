#include <iostream>

using namespace std;

int fibSequence(int num,int cou,int a,int b){

    int c;
    c=a;
    a=b;
    b=c+b;

    if(num == c){
        return cou;
   }
    if(c > num){
        return -1;
   }
    else{
        cou++;
        return fibSequence(num,cou,a,b);
    }

}

int main(){
    int num;
    cout << "Enter a number of fibonacci sequence to see it's index" << endl;
    cin >> num;
    if(fibSequence(num,0,0,1) != -1){
        cout << "The index of the number you've entered in fibonacci sequence : " << fibSequence(num,0,0,1) << endl;
    }
    else{
        cout << "The number you've entered is not a fibonacci number." << endl;
    }






	return 0;
}
