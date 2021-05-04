#include <iostream>
#include <stdlib.h>
#include <new>

using namespace std;



int* cStyleMemoryAlloc(int *arr,int sizeArr){
    arr=(int*)malloc(sizeof(int)*sizeArr);
    if(arr == nullptr){
        printf("Not enough memory.\n");
        return nullptr;
    }
    for(int i=0;i<sizeArr;i++){
        printf("Enter %d.Element=",i+1);
        scanf("%d",&arr[i]);
    }
    return arr;
}
int* cppStyleMemoryAlloc(int *arr,int sizeArr){
    arr=new int[sizeArr];
    if(arr == nullptr){
        cout << "Not enough memory." << endl ;
        return nullptr;
    }
    for(int i=0;i<sizeArr;i++){
        cout << "Enter " << i+1 << ".Element=" ;
        cin >> arr[i];
    }
    return arr;
}


void printElements(int *arr,int sizeArr){
    for(int i=0;i<sizeArr;i++){
        cout << i+1 << ".Element= " << arr[i] << endl;
    }

}
int main(){
	int *arr=nullptr;

    int  sizeArr;
    cout << "Enter the size of array:" << endl;
    cin >>  sizeArr;



    int selection;
    cout << "Enter [1] for c style allocation," << endl << "Enter [2] for cpp style allocation," <<  endl;
    cin >> selection;

    switch(selection){
    case 1:
        arr=cStyleMemoryAlloc(arr,sizeArr);
        break;
    case 2:
        arr=cppStyleMemoryAlloc(arr,sizeArr);
        break;
    default:
        cout << "Selections are 1 and 2...Please select a correct one." << endl;
        break;
    }
    printElements(arr,sizeArr);




	return 0;
}
