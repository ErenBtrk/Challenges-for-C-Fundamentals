#include <iostream>
#include <math.h>

using namespace std;

int absoInt(int x){
    if(x<0){
        return x*-1;
    }
    else{
        return x;
    }
}

float absoFloat(float x){
    if(x<0){
        return x*-1;
    }
    else{
        return x;
    }
}

int main(){
	int n1;
	float n2;
	long int n3;
	double n4;
	long double n5;


	cout << absoInt(-5) << endl;
    cout << absoFloat(23.124) << endl;

    cout << fabs(-213.4234) << endl;
    cout << abs(-1232.234) << endl;



	return 0;
}
