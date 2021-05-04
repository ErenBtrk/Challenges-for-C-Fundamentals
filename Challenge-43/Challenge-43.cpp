#include <iostream>
#include <stdlib.h>


using namespace std;

typedef struct n{
    int pos;
    int data;
    struct n*next;
    struct n*prev;
}node;

class Array{
private:
    node *root;
    int boyut;
public:
    int getBoyut(){
        return boyut;
    }
    Array();
    void insertion();
    int del();
    void traversal();
    void searchNum();
    void reverseArr();

};

Array::Array(){
    int i=1;
    root=NULL;
    root=(node*)malloc(sizeof(node));
    root->pos=i;
    root->data=0;
    root->next=NULL;
    root->prev=NULL;
    node *iter;
    iter=root;

    cout << "Boyut giriniz : " ;
    cin >> boyut;


    while(i != boyut){
        iter->next=(node*)malloc(sizeof(node));
        iter->next->pos=++i;
        iter->next->data=0;
        iter->next->next=NULL;
        iter->next->prev=iter;
        iter=iter->next;
    }
}

void Array::insertion(){
    node *iter;
    iter=root;
    int i=1;
    int pos,num;
    cout << "Enter the position of the number you want to add : " ;
    cin >> pos ;
    while(pos>boyut){
        cout << "Please enter a position within the dimensions of the array : " ;
        cin >> pos;
    }

    cout << "Enter a number to insert in array : " ;
    cin >> num;
    while( iter->next != NULL && iter->pos != pos){
        iter=iter->next;
        i++;
    }
    iter->data=num;
}

int Array::del(){
    if(root==NULL){
        cout << "There is no element in array to delete" << endl;
        return 0;
    }
    int pos;
    cout << "Enter the position of number you want to delete  : " ;
    cin >> pos;
    while(pos>boyut){
        cout << "Please enter a position within the dimensions of the array : " ;
        cin >> pos;
    }
    node *iter;
    iter=root;
    if(root->next == NULL){
        int tempValue;
        tempValue=root->data;
        free(root);
        root=NULL;
        return tempValue;
    }
    if(pos == 1){
        int tempValue;
        node *temp;
        tempValue=root->data;
        temp=root;
        root=root->next;
        root->prev=NULL;
        free(temp);
        return tempValue;
    }
    while(iter->next != NULL && iter->next->pos != pos){
        iter=iter->next;
    }
    node *temp;
    int tempValue;
    temp=iter->next;
    tempValue=temp->data;
    iter->next=iter->next->next;
    free(temp);
    if(iter->next != NULL){
        iter->next->prev=iter;
    }

    return tempValue;

}

void Array::searchNum(){
    if(root==NULL){
        cout << "There is no element in array" << endl;
        return;
    }
    int num;
    cout << "Enter the number you want to search in array : " ;
    cin >> num ;
    node *iter;
    iter=root;
    while(iter->next != NULL && iter->next->data != num){
        iter=iter->next;
    }
    if(iter->next == NULL){
        cout << "The number " << num << " you have entered is not in the array" << endl;
    }
    else{
        cout << "The number you have entered is in position " << iter->next->pos << endl;
    }
}
void Array::reverseArr(){
    if(root==NULL){
        cout << "There is no element in array" << endl;
        return;
    }
    node *iter;
    iter=root;
    while(iter->next != NULL){
        iter=iter->next;
    }
    while(iter ->prev!= NULL){
        cout << iter->data << " " ;
        iter=iter->prev;
    }
    cout << endl;
}




void Array::traversal(){
    node *iter;
    iter=root;
    while(iter != NULL){
        cout << "[" << iter->pos << "]= " << iter->data << endl;
        iter=iter->next;
    }
    cout << endl;
}
int main(){
    Array a1;
    int i;
    for(i=0;i<a1.getBoyut();i++){
        a1.insertion();
        a1.traversal();
    }


    cout << a1.del() << " is deleted" << endl;
    a1.traversal();
    a1.searchNum();
    a1.reverseArr();
    Array a2;
    a2.traversal();




	return 0;
}
