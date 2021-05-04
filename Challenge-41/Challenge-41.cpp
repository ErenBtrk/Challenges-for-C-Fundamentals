#include <iostream>
#include <math.h>

using namespace std;

enum ShapeType{
    Square,Rectangle,Triangle,Circle
};

class Shape{
private:
    double asq; //square
    double lrec,brec;   //rectangle
    double atri,btri,ctri; //triangle
    double rci; // circle

    ShapeType s;
    double peri;
    double ar;

    static const double PI;
public:
    Shape();
    Shape(ShapeType);
    void area();
    void perimeter();
    void display();
};

const double Shape::PI=3.14159;

Shape::Shape(ShapeType k){
    cout << "Shape Type : " ;
    s=k;
    switch(s){
        case Square:
            cout << "Square" << endl;
            cout << "Enter the side of the square:" << endl;
            cin >> asq;
            if(asq <= 0){
                cout << "Invalid value for side of square" << endl;
            }
        break;

        case Rectangle:
            cout << "Rectangle" << endl;
            cout << "Enter length and breadth of the rectangle:" << endl;
            cin >> lrec >> brec ;
            if(lrec <= 0 || brec <= 0){
                cout << "One or more value(s) is/are invalid" << endl;
            }
        break;

        case Triangle:
            cout << "Triangle" << endl;
            cout << "Enter the length of sides of the triangle:" << endl;
            cin>>atri >>btri >>ctri ;
            if(atri <= 0 || btri <= 0 || ctri <= 0){
                cout <<"One or more value(s) is/are invalid" << endl;
            }
            else{
                double s1=atri+btri;
                double s2=atri+ctri;
                double s3=btri+ctri;
                if(s1 <= ctri || s2 <= btri || s3 <=atri){
                    cout << "The 3 sides do not form a triangle" << endl;
                }
            }
            break;

        case Circle:
            cout << "Circle" << endl;
            cout << "Enter the radius of the circle:" << endl;
            cin >>rci;
            if(rci <= 0){
                cout << "Invalid value for radius of circle" << endl;
            }
        break;
    }
}

void Shape::perimeter(){
    switch(s){
        case Square:
            peri=4*asq;
            break;
        case Rectangle:
            peri=2*(lrec+brec);
            break;
        case Triangle:
            peri=atri+btri+ctri;
            break;
        case Circle:
            peri=2*PI*rci;
            break;
    }
}

void Shape::area(){
    switch(s){
        case Square:
            ar=asq*asq;
        break;

        case Rectangle:
            ar=lrec*brec;
        break;

        case Triangle:
            {
            double sp=(atri+btri+ctri)/2.0;
            ar=sqrt(sp*(sp-atri)*(sp-btri)*(sp-ctri));
            }
        break;

        case Circle:
            ar=PI*rci*rci;
        break;
    }
}

void Shape :: display( ){
    switch ( s ){
        case Square :
            cout << "Side of square: " << asq << endl ;
        break ;

        case Rectangle :
            cout << "Length of rectangle: " << lrec << endl ;
            cout << "Breadth of rectangle: " << brec << endl ;
        break ;

        case Triangle :
            cout << "Sides of triangle: " << atri << " " << btri << " "<< ctri << endl ;
        break ;

        case Circle :
            cout << "Radius of circle: " << rci << endl ;
        break ;
        }
        cout << "Perimeter: " << peri << endl ;
        cout << "Area: " << ar << endl ;
}

int main(){
    Shape squ = Shape ( Square ) ;
    squ.perimeter( ) ;
    squ.area( ) ;
    squ.display( ) ;
    Shape rec = Shape ( Rectangle ) ;
    rec.perimeter( ) ;
    rec.area( ) ;
    rec.display( ) ;
    Shape tri = Shape ( Triangle ) ;
    tri.perimeter( ) ;
    tri.area( ) ;
    tri.display( ) ;
    Shape cir = Shape ( Circle ) ;
    cir.perimeter( ) ;
    cir.area( ) ;
    cir.display( ) ;






	return 0;
}
