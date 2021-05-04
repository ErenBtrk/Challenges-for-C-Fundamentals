#include <iostream>

using namespace std;

class Sample{
public :
    Sample( ){
        cout << "Address of object passed to this function = " << this << endl ;
    }
};
int main( ){
    Sample s;
    cout << "Address of object s = " << &s << endl ;








	return 0;
}

