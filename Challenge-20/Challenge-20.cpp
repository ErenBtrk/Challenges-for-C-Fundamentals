#include <iostream>

using namespace std;

void function1(char,int,long,float=3.14,double=6.28);


int main(){
	function1('a',1,2434535,31.31,231.32523);
	function1('a',1,2434535,31.31);
    function1('a',1,2434535);



	return 0;
}

void function1(char c,int i,long li,float f,double d){
    cout << c << " " << i << " " << li << " " << f << " " << d << endl;
}
