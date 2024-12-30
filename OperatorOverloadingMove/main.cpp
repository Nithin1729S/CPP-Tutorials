#include <iostream>
#include "Mystring.h"
#include "Mystring.cpp"

using namespace std;

int main() {
    Mystring a{"Hello"};
    Mystring b;
    b=a;
    b="This is a test";
    return 0;
}
