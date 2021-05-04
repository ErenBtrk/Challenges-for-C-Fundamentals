#include <iostream>

using namespace std;

void cppStyle(){
    char cppChar;
	int cppInt;
	long int cppLongInt;
    float cppFloat;
    double cppDouble;
	long double cppLongDouble;
	cout << "****CPP STYLE****" << endl;
    cout << "Enter a char:" << endl;
	cin >> cppChar ;
	cout << "Enter an int:" << endl;
	cin >> cppInt;
	cout << "Enter a long int:" << endl;
	cin >> cppLongInt;
	cout << "Enter a float:" << endl;
	cin >> cppFloat;
	cout << "Enter a double:" << endl;
	cin >> cppDouble;
	cout << "Enter a long double:" << endl;
	cin >> cppLongDouble;

	cout << "Character=" << cppChar << endl;
	cout << "Int=" << cppInt << endl;
	cout << "Long int=" << cppLongInt << endl;
	cout << "Float=" << cppFloat << endl;
	cout << "Double=" << cppDouble << endl;
	cout << "Long Double=" << cppLongDouble << endl << endl;

}

void cStyle(){
    char cChar;
	int cInt;
	long int cLongInt;
    float cFloat;
    double cDouble;
	long double cLongDouble;

    printf("****C STYLE***\n");
	printf("Enter a char:\n");
	scanf(" %c",&cChar);
	printf("Enter an int:\n");
	scanf("%d",&cInt);
	printf("Enter a long int:\n");
	scanf("%ld",&cLongInt);
	printf("Enter a float:\n");
	scanf("%f",&cFloat);
	printf("Enter a double:\n");
	scanf("%lf",&cDouble);
	printf("Enter a long double:\n");
	scanf("%lf",&cLongDouble);

	printf("Character=%c\nInt=%d\nLong int=%ld\nFloat=%f\nDouble=%f\nLong Double=%lf\n",cChar,cInt,cLongInt,cFloat,cDouble,cLongDouble);

}

int main(){
    cppStyle();
    cStyle();










	return 0;
}
