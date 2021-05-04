#include <iostream>

using namespace std;

const int MAX=10;

class Poly{
private:
    struct term{
        int coef;
        int ex;
    }t[MAX];
    int noofterms;
public:
    Poly();
    void polyAppend();
    void polyAdd(Poly &p1,Poly &p2);
    void display();
};

Poly::Poly(){
    noofterms=0;
    for(int i=0;i<MAX;i++){
        t[i].coef=0;
        t[i].ex=0;
    }
}

void Poly::polyAppend(){
    int c,e;


        cout << "If you are done with adding terms enter [-99] " << endl;
    while(true){

        cout << "Please enter coefficient of " << noofterms+1 << ".term : " ;
        cin >> c;
        cout << "Please enter exponent of " << noofterms+1 << ".term : " ;
        cin >> e;

        if(c == -99 || e == -99 || noofterms >=MAX){
            break;
        }

        t[noofterms].coef=c;
        t[noofterms].ex=e;
        noofterms++;

    }
}

void Poly::polyAdd(Poly &p1,Poly &p2){
    int c=p1.noofterms > p2.noofterms ? p1.noofterms : p2.noofterms;

    for(int i=0,j=0 ; i<=c ;noofterms++){
        if(p1.t[i].coef==0 && p2.t[j].coef==0){
            break;
        }
        if(p1.t[i].ex >= p2.t[j].ex){
            if(p1.t[i].ex == p2.t[j].ex){
                this->t[noofterms].coef=p1.t[i].coef+p2.t[j].coef;
                this->t[noofterms].ex=p1.t[i].ex;
                i++;
                j++;
            }
            else{
                this->t[noofterms].coef=p1.t[i].coef;
                this->t[noofterms].ex=p1.t[i].ex;
                i++;
            }
        }
        else{
            this->t[noofterms].coef=p2.t[j].coef;
            this->t[noofterms].ex=p2.t[j].ex;
            j++;
        }
    }
}

void Poly::display(){
    int flag=0;

    for(int i=0 ; i< noofterms-1 ; i++){
        if(t[i].ex != 0){
            cout << t[i].coef << "x^" << t[i].ex << "+";
        }
        else{
            cout << t[i].coef;
            flag=1;
        }
    }
         if(t[noofterms-1].ex != 0){
            cout << t[noofterms-1].coef << "x^" << t[noofterms-1].ex ;
        }
        else{
            cout << t[noofterms-1].coef;
            flag=1;
        }

    if(flag == 0){
        cout << "\b\b";
    }

}

int main(){
	Poly p1;
	p1.polyAppend();

    Poly p2;
    p2.polyAppend();
    cout <<endl << endl << "First polynom : " << endl;
    p1.display();

    cout <<endl << endl <<"Second polynom : " << endl;
    p2.display();

    Poly p3;
    p3.polyAdd(p1,p2);
    cout <<endl << endl << "p1+p2 :" << endl;
    p3.display();



	return 0;
}
