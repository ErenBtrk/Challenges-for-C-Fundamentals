#include <iostream>
#include <math.h>

using namespace std;

enum SolidType{
    Cube,Cuboid,Cylinder,Cone,Sphere,Hemisphere
};

class Solid{
private:
    static const double PI;
    double a; //Cube
    double lcu,bcu,hcu; //Cuboid
    double rcy,hcy; //Right circular cylinder
    double rco,hco; // Right circular cone;
    double rsp; // sphere
    double rhsp; // semisphere
    SolidType s;
    double v,csa,tsa;
public:
    Solid(){};
    Solid(SolidType);
    void surfaceArea();
    void volume();
    void display();

};

const double Solid :: PI = 3.14159 ;



Solid::Solid(SolidType k){
        cout << "Solid Type : ";
        s=k;
    switch(s){
        case Cube:
            cout << "Cube" << endl;
            cout << "Enter edge length of cube:" << endl;
            cin >> a;
            if(a <= 0){
                cout << "Invalid value for edge length" << endl;
            }
        break;

        case Cuboid:
            cout << "Cuboid" << endl;
            cout << "Enter len,breadth and height of cuboid:" << endl;
            cin >> lcu >> bcu >> hcu ;

            if(lcu<=0 || bcu<=0 || hcu <=0){
                cout << "One or more value(s) is/are invalid" << endl;
            }
            break;
        case Cylinder:
            cout << "Cylinder" << endl;
            cout << "Enter radius and height of cylinder:" << endl;
            cin >> rcy >> hcy ;

            if(rcy<=0 || hcy<=0){
                cout << "One or more value(s) is/are invalid" << endl;
            }
            break;
        case Cone:
            cout << "Cone" << endl;
            cout << "Enter radius   and height of cone:" << endl;
            cin >> rco >> hco;

            if(rco<=0 || hco <=0){
                cout << "One or more value(s) is/are invalid" << endl;
            }
            break;
        case Sphere:
            cout << "Sphere" << endl;
            cout << "Enter radius of sphere:" << endl;
            cin >> rsp;

            if(rsp<=0){
                cout << "Invalid value for radius of sphere" << endl;
            }
            break;
        case Hemisphere:
            cout << "Hemisphere" << endl;
            cout << "Enter radius of hemisphere:" << endl;
            cin >> rhsp;

            if(rhsp<=0){
                cout << "Invalid value for radius of hemisphere" << endl;
            }
            break;
    }
}

void Solid::surfaceArea(){
    double lco;

    switch(s){
        case Cube:
            csa=4*a*a;
            tsa=6*a*a;
        break;

        case Cuboid:
            csa=2*hcu*(lcu+bcu);
            tsa = 2*(lcu*bcu+bcu*hcu+lcu*hcu) ;
        break ;

        case Cylinder :
            csa = 2 * PI * rcy * hcy ;
            tsa = csa + 2 * PI * rcy * rcy ;
        break ;

        case Cone:
            lco = sqrt ( rco * rco + hco * hco ) ;
            csa = PI * rco * lco ;
            tsa = csa + PI * rco * rco ;
        break ;

        case Sphere:
            csa=tsa=4*PI*rsp*rsp;
        break;

        case Hemisphere:
            csa=2*PI*rhsp*rhsp;
            tsa=3*PI*rhsp*rhsp;
        break;
    }
}

void Solid::volume(){
    switch ( s ){
        case Cube :
            v = a * a * a ;
        break ;

        case Cuboid :
            v = lcu * bcu * hcu ;
        break ;

        case Cylinder :
            v = PI * rcy * rcy * hcy ;
        break ;

        case Cone :
            v = ( PI * rco * rco * hco ) / 3.0 ;
        break;

        case Sphere:
            v=(4/3.0)*(PI*rsp*rsp*rsp);
        break;

        case Hemisphere:
            v=(2/3.0)*(PI*rhsp*rhsp*rhsp);
        break;
    }
}

void Solid :: display( ){
    switch ( s ){
        case Cube :
            cout << "Edge of cube: " << a << endl ;
        break ;

        case Cuboid :
            cout << "Length of cuboid: " << lcu << endl ;
            cout << "Breadth of cuboid: " << bcu << endl ;
            cout << "Height of cuboid: " << hcu << endl ;
        break ;

        case Cylinder :
            cout << "Radius of Cylinder: " << rcy << endl ;
            cout << "Height of Cylinder: " << hcy << endl ;
        break ;

        case Cone :
            cout << "Radius of Cone: " << rco << endl ;
            cout << "Height of Cone: " << hco << endl ;
        break ;

        case Sphere :
            cout << "Radius of Sphere: " << rsp << endl ;
        break ;

        case Hemisphere :
            cout << "Radius of Hemisphere: " << rhsp << endl ;
        break ;
    }
        cout << "Lateral Surface Area: " << csa << endl ;
        cout << "Total Surface Area: " << tsa << endl ;
        cout << "Volume: " << v << endl ;
}


int main(){
    Solid cyl = Solid ( Cylinder ) ;
    cyl.surfaceArea( ) ;
    cyl.volume( ) ;
    cyl.display( ) ;
    Solid cube = Solid ( Cube ) ;
    cube.surfaceArea( ) ;
    cube.volume( ) ;
    cube.display( ) ;
    Solid cub = Solid ( Cuboid ) ;
    cub.surfaceArea( ) ;
    cub.volume( ) ;
    cub.display( ) ;
    Solid con = Solid ( Cone ) ;
    con.surfaceArea( ) ;
    con.volume( ) ;
    con.display( ) ;
    Solid hem = Solid ( Hemisphere ) ;
    hem.surfaceArea( ) ;
    hem.volume( ) ;
    hem.display( ) ;
    Solid sph = Solid ( Sphere ) ;
    sph.surfaceArea( ) ;
    sph.volume( ) ;
    sph.display( ) ;






	return 0;
}
