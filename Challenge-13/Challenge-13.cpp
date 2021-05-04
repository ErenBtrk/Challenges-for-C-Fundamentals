#include <iostream>
#include <math.h>

using namespace std;

bool isCardano(int a,int b,int c){
   float brc=b*sqrt(c);
   float num=cbrt(a+brc)+cbrt(a-brc);

   if(num<1.000001 && num > 0.999999){
        return true;
   }
   else{
        return false;
   }


}



int main(){
    int cou=0;
	for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            for(int k=1;k<=100;k++){
                if(i+j+k<=100){
                    if(isCardano(i,j,k)){
                        cou++;
                        cout << cou <<" . Cardano Triplet = " << i << "  -  " << j << "  -  " << k << endl;
                    }
                }
            }
        }
	}






	return 0;
}
