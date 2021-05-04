#include <iostream>
#include <stdlib.h>
#include <new>

using namespace::std;

int* cStyleAllocation(int *arr,int arraySize){
    arr=(int*)malloc(sizeof(int)*arraySize);
    if(arr == NULL){
        printf("Not enough memory...\n");
        return NULL;
    }
    else{
        printf("Memory successfully allocated...\n");
            for(int i=0;i<arraySize;i++){
                printf("Enter %d.Element of array=",i+1);
                scanf("%d",&arr[i]);
            }
        return arr;
    }
}

int* cppStyleAllocation(int *arr,int arraySize){

    arr=new int[arraySize];
    if(arr == nullptr){
        cout << "There is not enough memory..." << endl;
        return nullptr;
    }
    else{
        for(int i=0;i<arraySize;i++){
            cout << "Enter " << i+1 << ".Element=" ;
            cin >> arr[i];
        }
        return arr;
    }
}

int* deleteArray(int *arr){

    if(arr == nullptr){
        cout << "Array has no elements to delete..." << endl;
        return nullptr;
    }
    else{
        delete arr;
        arr=nullptr;
        cout << "The array is deleted" << endl;
        return arr;
    }

}

void printArray(int *arr,int arraySize){
    if(arr == nullptr){
        cout << "Array has no elements." << endl;
        return;
    }
    for(int i=0;i<arraySize;i++){
        cout << i+1 << ".Element= " << arr[i] << endl;
    }

}
int main(){
	int *arr=nullptr;
    int arraySize;
    cout << "Enter the size of array:" << endl;
    cin >> arraySize ;
    while(arraySize < 0 ){
            if(arraySize<0){
                cout << "Size cant be lower than zero" << endl;
            }
            cout << "Enter the size of array:" << endl;
            cin >> arraySize ;
    }
        int selection;

        while(selection != -1){

            cout << "Enter [1] if you want to allocate memory C style," << endl;
            cout << "Enter [2] if you want to allocate memory Cpp style," << endl;
            cout << "Enter [3] if you want to print the elements of array," << endl;
            cout << "Enter [4] if you want to delete the array," << endl;
            cout << "Enter [5] if you want to change array size," << endl;
            cout << "Enter [-1] if you want to exit." << endl;
            cout << "Enter :" ;
            cin >> selection ;

            switch(selection){
                case 1:
                    arr=cStyleAllocation(arr,arraySize);
                    cout << "C style memory allocation is done." << endl;
                    break;
                case 2:
                    arr=cppStyleAllocation(arr,arraySize);
                    cout << "CPP style memory allocation is done. " << endl;
                    break;
                case 3:
                    printArray(arr,arraySize);
                    break;
                case 4:
                    arr=deleteArray(arr);
                    break;
                case 5:
                    cout << "Enter new size of array:" << endl;
                    cin >> arraySize ;
                        while(arraySize < 0 ){
                            if(arraySize<0){
                                    cout << "Size cant be lower than zero" << endl;
                            }
                            cout << "Enter the size of array:" << endl;
                            cin >> arraySize ;
                        }
                    break;
                case -1:
                    cout << "Exiting program..." << endl;
                    break;
                default :
                    cout << "Your selection is wrong.Please enter a correct one." << endl;
                    break;
            }
            if(selection == -1){
                break;
            }

        }
	return 0;
}
