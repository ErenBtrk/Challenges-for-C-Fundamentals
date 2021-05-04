#include <iostream>
#include <stdarg.h>

using namespace std;

int findmax(int x,...){
    int y;
    int enb;
    int temp;
    va_list obj;

    va_start(obj,x);
    enb=va_arg(obj,int);
    for(y=2;y<=x;y++){
       temp=va_arg(obj,int);
            if(temp>enb){
                enb=temp;
            }
    }
    va_end(obj);
    return enb;
}

int main(){
	cout << findmax(5,5,6,21,19,20) << endl;






	return 0;
}
