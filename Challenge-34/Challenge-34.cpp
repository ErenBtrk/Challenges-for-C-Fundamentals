// Project: chall34
// Program to illustrate constructor with default values for arguments
#include <iostream>
using namespace std ;
class Sample
{
private :
int i ;
float a ;
public :
Sample ( int j = 0, float b = 0.0 )
{
i = j ;
a = b ;
}
void printData( )
{
cout << "i = " << i << " a = " << a << endl ;
}
} ;
int main( )
{
Sample s1, s2 ;
Sample s3 ( 10, 3.14 ), s4 ( 20, 6.28 ) ;
Sample s5 ( 30 ), s6 ( 40 ) ;
s1.printData( ) ;
s2.printData( ) ;
s3.printData( ) ;
s4.printData( ) ;
s5.printData( ) ;
s6.printData( ) ;
return 0;
}
