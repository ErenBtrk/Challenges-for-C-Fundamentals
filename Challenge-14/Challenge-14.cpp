#include <iostream>
#include <stdlib.h>

bool isArit(float *dizi,int boyut){
    int diff=dizi[1]-dizi[0];
    int flag=1;
    for(int i=2;i<boyut;i++){
        if(dizi[i]-dizi[i-1]!=diff){
            flag=0;
            break;
        }
    }
    if(flag == 1){
        return true;
    }
    else{
        return false;
    }
}

bool isGeo(float *dizi,int boyut){
    int flag=1;
    for(int i=0;i<boyut;i++){
        if(dizi[i] == 0){
            flag=0;
            break;
        }
    }
    if(flag == 1){
        float diff=dizi[1]/dizi[0];
        for(int i=2;i<boyut;i++){
            if(dizi[i]/dizi[i-1] != diff){
                flag=0;
                break;
            }
        }
    }
        if(flag == 1){
            return true;
        }
        else{
            return false;
        }



}

using namespace std;

int main(){
	float *dizi;
	int boyut;
        dizi=new float(boyut);
        cout << "Enter number of elements of the array : " << endl;
        cin >> boyut;
        if(boyut<=0){
            while(boyut<=0){
                cout << "Please enter a number greater than zero" << endl;
                cin >> boyut;
            }
        }
        for(int i=0;i<boyut;i++){
            cout << "Enter " << i+1 << ".element : " << endl;
            cin >> dizi[i];
        }
        if(isArit(dizi,boyut)){
            cout << "The elements in the array you've entered follow arithmetic progression..." << endl;
        }
        else{
            cout << "Not arithmetic..." << endl;
        }
        if(isGeo(dizi,boyut)){
            cout << "The elements in the array you've entered follow geometric progression..." << endl;
        }
        else{
            cout << "Not geometric..." << endl;
        }






	return 0;
}
