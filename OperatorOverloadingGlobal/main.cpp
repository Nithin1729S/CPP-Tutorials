#include <iostream>
#include "Mystring.h"
#include "Mystring.cpp"

using namespace std;

int main() {
    Mystring a{"HELLO"};
    Mystring b;
    b=-a;

    if(b==a){
        std::cout<<"True"<<std::endl;
    }else{
        std::cout<<"False"<<std::endl;
    }

    Mystring c=a+" "+b;
    std::cout<<c.get_str()<<std::endl;
    return 0;
}
