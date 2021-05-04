#include <iostream>


using namespace std;



class array{
private:
    int MAX;
    int *arr;
public:
    array();
    array(int sizeArr);
    int getMAX(){
        return MAX;
    }
    void traversal();
    void insertion();
    void searchNum();
    array deletion();
    void reverseArr();



};

array::array(){
    arr=NULL;
    MAX=0;
}

array::array(int sizeArr){
    MAX=sizeArr;
    arr=new int[sizeArr];
    for(int i=0;i<sizeArr;i++){
        arr[i] = 0;
    }
}

void array::insertion(){
    int pos;
    int num;
    cout << "Please enter a number : " ;
    cin >> num;
    cout << "Please enter the position of number you 've entered : " ;
    cin >> pos;

    while(pos > MAX){
        cout << "Please enter a position within the dimensions of the array : " ;
        cin >> pos;
    }

    while(arr[pos-1] != 0){
        cout << "The position you've entered already has a number,Please enter a position below : " << endl;
        for(int i=0;i<getMAX();i++){
            if(arr[i] == 0){
            cout << "[" << i+1 << "] - " ;
            }
        }
        cout << endl << "Enter the new position : " ;
        cin >> pos ;
    }

        arr[pos-1] = num;

    cout << endl;


}

void array::searchNum(){
    int num;
    cout << "Please enter a number to search in array : " ;
    cin >> num;

    int flag=0;

    for(int i=0;i<MAX;i++){
        if(num == arr[i]){
            cout << "The number you've entered found in position : " << i+1 << endl;
            flag++;
        }
    }
    if(flag == 0){
        cout << "The number you've entered couldnt be found in array" << endl;
    }

}

array array::deletion(){
    int pos;
    cout << "Please enter the position of number you want to delete : " ;
    cin >> pos ;

    while(pos > MAX){
        cout << "Please enter a position within the dimensions of the array : " ;
        cin >> pos;
    }

    array temp(MAX-1);
    int flag=0;
    for(int i=0;i<MAX;i++){
        if(i+1 == pos){
            flag=1;
            continue;
        }
        if(flag == 1){
            temp.arr[i-1]=this->arr[i];
        }
        else if(flag == 0){
            temp.arr[i]=this->arr[i];
        }

    }
    delete [] this->arr;

    return temp;



}

void array::traversal(){
    for(int i=0;i<getMAX()-1;i++){
        cout << arr[i] << " - ";
    }
    cout << arr[getMAX()-1] << endl;

}

void array::reverseArr(){
    cout << "Reversed array : " << endl;
    int temp;
    for(int i=0;i<MAX/2;i++){
        temp=arr[i];
        arr[i]=arr[MAX-1-i];
        arr[MAX-1-i]=temp;
    }


}
int main(){
    int sizeArr;
    cout << "Please enter the size of array : " ;
    cin >> sizeArr;
    array a1(sizeArr);
    a1.traversal();
    for(int i=0;i<5;i++){
        a1.insertion();

    }
    a1.traversal();
    a1.searchNum();
    a1=a1.deletion();
    a1.traversal();
    a1.reverseArr();
    a1.traversal();

	return 0;
}
