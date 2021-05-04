#include <iostream>

using namespace std;

class array{
private:
    int *arr=NULL;
    int MAX=0;
public:
    array();
    array(int sizeArr);
    array(array,array);
    void insertion();
    void traversal();
    void sorting();

};

array::array(){}

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
        for(int i=0;i<MAX;i++){
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

void array::sorting(){
    int temp;
    int enk;
        for(int i=0;i<MAX;i++){
            enk=i;
            for(int j=i+1;j<MAX;j++){
                if(arr[j]<arr[enk]){
                    enk=j;
                }
            }
            temp=arr[i];
            arr[i]=arr[enk];
            arr[enk]=temp;
        }
}
array::array(array a1,array a2){
    this->MAX=a1.MAX+a2.MAX;
    this->arr=new int[this->MAX];
    int flag=0;
    int j=0;
    for(int i=0;i < this->MAX ;i++){
        if(i== a1.MAX){
            flag=1;
            j=0;
        }
        if(flag == 1){
            this->arr[i]=a2.arr[j];
            j++;
        }
        else if(flag == 0){
            this->arr[i]=a1.arr[j];
            j++;
        }
    }


}

void array::traversal(){
    for(int i=0;i<MAX-1;i++){
        cout << arr[i] << " - ";
    }
    cout << arr[MAX-1] << endl;

}

int main(){
    int sizeArr;
    cout << "Please enter the size of first array : " ;
    cin >> sizeArr;
	array a1(sizeArr);
	for(int i=0;i<sizeArr;i++){
        a1.insertion();
	}
	cout << "First array :" << endl;
	a1.traversal();

    cout << "Please enter the size of second array : " ;
    cin>>sizeArr;
    array a2(sizeArr);
    for(int i=0;i<sizeArr;i++){
        a2.insertion();
    }
    cout << "Second array :" << endl;
    a2.traversal();

    array a3(a1,a2);
    cout << "Merged array :" << endl;
    a3.sorting();
    a3.traversal();




	return 0;
}
