#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

class Matrix{
private:
    const static int maxSize=3;
    int arr[maxSize][maxSize];

public:
    Matrix(){
        for(int i=0;i<maxSize;i++){
            for(int j=0;j<maxSize;j++){
                arr[i][j]=0;
            }
        }
    }

    void initializeMatrix(){
        for(int i=0;i<maxSize;i++){
            for(int j=0;j<maxSize;j++){
                cout <<"Enter "<< i << ".Line " <<j << ".Column Element = " <<endl;
                cin >> arr[i][j];
            }
        }
    }
    void displayMatrix(){
        for(int i=0;i<maxSize;i++){
            for(int j=0;j<maxSize;j++){
                cout <<  left  << setw(3) << arr[i][j] << " " ;
            }
            cout << endl;
        }
    }
    void addition(Matrix &a,Matrix &b){
        for(int i=0;i<maxSize;i++){
            for(int j=0;j<maxSize;j++){
                arr[i][j]=a.arr[i][j]+b.arr[i][j];
            }
        }
    }
    void substraction(Matrix &a,Matrix &b){
        for(int i=0;i<maxSize;i++){
            for(int j=0;j<maxSize;j++){
                arr[i][j]=a.arr[i][j]-b.arr[i][j];
            }
        }
    }
    void multiply(Matrix &a,Matrix &b){
        for ( int i = 0 ; i < maxSize ; i++ ){
            for ( int j = 0 ; j < maxSize ; j++ ){
                int temp ;
                temp = 0 ;
                    for ( int k = 0 ; k < maxSize ; k++ )
                        temp = temp + a.arr[ i ][ k ] * b.arr[ k ][ j ] ;
                        arr[ i ][ j ] = temp ;
            }
        }

    }
    void transpose(Matrix &a){
        for(int i=0;i<maxSize;i++){
            for(int j=0;j<maxSize;j++){
                arr[i][j]=a.arr[j][i];
            }
        }
    }
    int determinant(){
        int det;
        int j,k,p;

        det=0;
        j=1;
        k=maxSize-1;

        for(int i=0;i<maxSize;i++ ){
            p=pow(-1,i);

            if(i==maxSize-1){
                k=1;
            }
            det+=p*(arr[0][i]*(arr[1][j]*arr[2][k]-arr[2][j]*arr[1][k]));
            j=0;
        }
        return det;
    }


};

int main(){
    Matrix mat1;
    Matrix mat2;
    Matrix mat3;
    Matrix mat4;
    Matrix mat5;
    Matrix mat6;
        cout << "Initialize Matrix 1: " << endl ;
        mat1.initializeMatrix( ) ;
        cout << "Initialize Matrix 2: " << endl ;
        mat2.initializeMatrix( ) ;
        cout << "First Matrix: " << endl ;
        mat1.displayMatrix( ) ;
        cout << "Second Matrix: " << endl ;
        mat2.displayMatrix( ) ;
        mat3.addition ( mat1, mat2 ) ;
        cout << "After addition: " << endl ;
        mat3.displayMatrix( ) ;
        mat6.substraction(mat1,mat2);
        cout << "After substraction: " << endl;
        mat6.displayMatrix();
        mat4.multiply ( mat1, mat2 ) ;
        cout << "After multiplication: " << endl ;
        mat4.displayMatrix( ) ;
        mat5.transpose ( mat1 ) ;
        cout << "Transpose of Matrix 1: " << endl ;
        mat5.displayMatrix( ) ;
        cout << "Determinant of Matrix 1: " << mat1.determinant( ) << endl ;

	return 0;
}
