#include <iostream>

using namespace std;

int main(){
    cout << "How is polymorphism using virtual functions different than compile-time polymorphism?" << endl << endl;
    cout << "The term binding refers to the connection between a function call and\n"
                "the actual code executed as a result of the call. If the function invoked in\n"
                "response to each call is known at compile-time, it is called static or early\n"
                "binding, because the compiler can figure out the function to be called\n"
                "before the program is run.\n"
                "When virtual functions are called using pointer it is known as dynamic\n"
                "binding. Dynamic binding is so named because the actual function called\n"
                "at run-time depends on the contents of the pointer. It is also known as\n"
                "late binding, because the connection between the function call and the\n"
                "actual code executed by the call is determined late during the execution\n"
                "of the program and not when the program is compiled.\n"
                "The keyword virtual tells the compiler that it should not perform early\n"
                "binding. Instead, it should automatically install all the mechanisms\n"
                "necessary to perform late binding\n"
    << endl;





    return 0;
}
