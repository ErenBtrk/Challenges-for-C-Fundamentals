#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Matrix{
private:
    int MAX;
    int **arr=NULL;
public:
    Matrix();
    Matrix(int);
    int getMAX(){
        return MAX;
    }
    void insertion();
    void traversal();
    void transpose(Matrix);
    void multiply(Matrix,Matrix);
    int determinant();
    bool isSingular();
    bool isOrthogonal(Matrix);


};

Matrix::Matrix(){ }


Matrix::Matrix(int sizeArr){
    MAX=sizeArr;

    arr=(int**)malloc(sizeof(int)*sizeArr*sizeArr);

    if(arr == NULL){
        cout << "Not enough memory" << endl;
    }
    else{
        for(int i=0;i<sizeArr;i++){
            arr[i]=(int*)malloc(sizeof(int)*sizeArr);
            if(arr[i] == NULL){
                cout << "Not enough memory" << endl;
            }
        }
    }

}

void Matrix::insertion(){

    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            cout << "Enter " << i << ".Line " << j << ".Column Element : " << endl;
            cin >> arr[i][j];
        }
    }
}

void Matrix::transpose(Matrix a){
    this->arr=new int*[a.MAX];
    this->MAX=a.MAX;
    if(this->arr == NULL){
        cout << "Not enough memory " << endl;
    }
    else{
        for(int i=0;i<a.MAX;i++){
            this->arr[i]=new int[a.MAX];
            if(this->arr[i] == NULL){
                cout << "Not enough memory " << endl;
            }
        }
    }

    for(int i=0 ; i<this->MAX ;i++){
        for(int j=0 ; j<this->MAX ;j++){
            this->arr[i][j]=a.arr[j][i];
        }
    }

}

void Matrix::multiply(Matrix a,Matrix b){
    this->arr=new int*[a.MAX];
    this->MAX=a.MAX;
    if(this->arr == NULL){
        cout << "Not enough memory" << endl;
    }
    else{
        for(int i=0;i<a.MAX;i++){
            this->arr[i]=new int[a.MAX];
            if(this->arr[i] == NULL){
                cout << "Not enough memory " << endl;
            }
        }
    }
     for(int i=0;i<a.MAX;i++){
        for(int j=0;j<a.MAX;j++){
            this->arr[i][j]=0;
        }
    }
    for(int i=0;i<a.MAX;i++){
        for(int j=0;j<a.MAX;j++){
            for(int k=0;k<a.MAX;k++)
                this->arr[i][j]+=a.arr[i][k]*b.arr[k][j];

        }
    }
}

int Matrix::determinant(){
    int det=0;
    int j=1;
    int k=MAX-1;
    int p;
    for(int i=0;i<MAX;i++){
            p=pow(-1,i);
            if(i == MAX-1){
                k=1;
            }
            det = det + ( arr[ 0 ][ i ] * ( arr[ 1 ][ j ] *arr[ 2 ][ k ] - arr[ 2 ][ j ] *arr[ 1 ][ k ] ) ) * p ;
            j=0;

    }
    return det;
}

bool Matrix::isSingular(){
    if(this->determinant() == 0){
        return true;
    }
    else{
        return false;
    }
}

bool Matrix::isOrthogonal(Matrix multiTrans){
    int flag=0;
    for(int i=0 ; i<MAX ; i++){
        for(int j=0 ; j<MAX ;j++){
            if(this->arr[i][j] != multiTrans.arr[i][j]){
                flag=1;
                break;
            }
        }
    }
    if(flag == 0){
        return true;
    }
    else{
        return false;
    }


}

void Matrix::traversal(){
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }
    cout << endl;
}

int main(){
    cout << "Enter the elements of first matrix : "<< endl;
    Matrix a1(3);
    a1.insertion();

    cout << "Matrix : " <<endl;
    a1.traversal();


    cout << "Transpose of matrix : " << endl;
    Matrix trans;
    trans.transpose(a1);
    trans.traversal();

    cout << "Determinant of matrix = " << a1.determinant() << endl << endl;

    cout << "Matrix x Transpose of Matrix : "<< endl;
    Matrix multi;
    multi.multiply(a1,trans);
    multi.traversal();
    cout << endl;

    if(a1.isOrthogonal(multi)){
        cout << "Matrix is orthogonal "<< endl;
    }
    else{
        cout << "Matrix is not orthogonal " << endl;
    }
    cout << endl;

    if(a1.isSingular()){
        cout << "Matrix is singular " << endl;
    }
    else{
        cout << "Matrix is not singular" << endl;
    }

	return 0;
}
