#include <iostream>

using namespace std;

int main(){
    cout << "What are VTABLE and VPTRs? How do they work?" << endl << endl;
    cout << "To accomplish late binding, the compiler creates a table called VTABLE\n"
                "for each class that contains virtual functions and for the classes derived\n"
                "from it. The compiler places the addresses of the virtual functions for\n"
                "that particular class in the VTABLE. If you don't redefine a function that\n"
                "was declared virtual in the base class, the compiler uses the address of\n"
                "the base-class version in the derived class's VTABLE.\n\n"
                "The compiler inserts a pointer called VPTR in every object that is created\n"
                "from a class that has one or more virtual functions in it. When objects of\n"
                "the base class are created the VPTR in them point to base class's\n"
                "VTABLE. When objects of derived class are created the VPTR in them\n"
                "point to derived class's VTABLE.\n\n"
                "When we call a virtual function through a pointer the compiler quietly\n"
                "inserts code to fetch the VPTR present in the object whose address is\n"
                "present in the pointer and look up the virtual function's address in the\n"
                "VTABLE, thus calling the right function and causing late binding to take\n"
                "place.\n\n"
                "All of this—setting up the VTABLE for each class, initializing the VPTR,\n"
                "inserting the code for the virtual function call—happens automatically,\n"
                "so you don't have to worry about it.\n"
                << endl;





    return 0;
}
