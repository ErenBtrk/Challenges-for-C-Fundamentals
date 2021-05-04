#include <iostream>

using namespace std;

int factorial(int num){

    if(num==0){
        return 1;
    }

    return num*factorial(num-1);

}

bool isCurious(int num){
    if(num==0){
        return false;
    }
    int sum=0;
    int temp=num;
    while(temp>0){
        sum+=factorial(temp%10);
        temp/=10;
    }
    if(num==sum){
        return true;
    }
    else{
        return false;
    }
}


int main(){
    for(int i=0;i<=10000;i++){
        if(isCurious(i)){
            cout << i << " " ;
        }
    }






	return 0;
}
