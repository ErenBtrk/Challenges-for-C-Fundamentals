#include <iostream>

using namespace std;

int main(){
    int monthDays[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    string days[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int sumDays=0;
    int daysToAdd;
    int countMonday=0;
    int a;
    for(int i=1901;i<=2000;i++){
        monthDays[1]=28;

        if(i%4==0){
            if(i%100==0){
                if(i%400!=0){
                    continue;
                }
            }
            monthDays[1]++;
        }

        for(int j=0;j<12;j++){
            a=monthDays[j];
            sumDays+=monthDays[j];
            if((sumDays+1)%7 == 6 ){
                cout << "YIL=" << i  << " GUN=" << sumDays << endl;
                countMonday++;
            }
        }

    }
    cout << "The number of sundays fell on the first of the month during the twentieth century: " <<countMonday << endl;



	return 0;
}
