#include <iostream>
#include <iomanip>

using namespace std;


void denominationDetails(int d[],int amount){
    if(amount <= 0){
        cout << "Enter an amount greater than 0" << endl;
        return;
    }
    for(int i=7;i>=0;i--){
        if(amount<=0){
            break;
        }
        if(amount>=d[i]){
            cout << setw(7) << left << d[i] << "x" << setw(7) << left <<  amount/d[i] << "= " << setw(7) << left << d[i] * (amount/d[i]) << endl;
            amount%=d[i];
        }

    }



}

int main(){
	//Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100, Rs. 500 and Rs. 2000.
    int denominations[8]={1,2,5,10,50,100,500,2000};
    int amount;
    cout << "Enter an amount:" << endl;
    cin>>amount;

    denominationDetails(denominations,amount);






	return 0;
}
