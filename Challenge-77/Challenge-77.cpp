#include <iostream>

using namespace std;

int main(){
    cout << "What are the basic requirements to be met for runtime polymorphism to work?" << endl << endl;
    cout << "Following are the requirements that should be met for runtime polymorphism:\n"
                "(a) There must be inheritance.\n"
                "(b) The function names in the base and derived class must be same.\n"
                "(c) Function must be marked as virtual in the base class.\n"
                "(d) The call to the function must happen through a pointer (upcasted\n"
                "or not)."
    << endl;




    return 0;
}
