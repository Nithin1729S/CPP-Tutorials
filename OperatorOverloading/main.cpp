#include <iostream>
#include "Mystring.h"
#include "Mystring.cpp"

using namespace std;

int main() {
    Mystring a{"Hello"};
    Mystring b;
    b=a;
    cout<<b.get_str()<<endl;

    b="This is a test";

    cout<<b.get_str()<<endl;

    
    return 0;
}
