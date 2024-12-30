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
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<c<<std::endl;

    Mystring temp;
    std::cout<<"Enter a string "<<std::endl;
    std::cin>>temp;

    std::cout<<temp<<std::endl;


}
