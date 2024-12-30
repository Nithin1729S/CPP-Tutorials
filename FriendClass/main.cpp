#include "A.cpp"
#include "B.cpp"
#include<string>
#include<iostream>

int main()
{
    {
        A a;
        A::get_count();
        a.set_name("Nithin");
        a.get_name();
    }
    A::get_count();

    B b;
    B::get_count();
    b.set_name("Abin");
    b.get_name();

    // b.ruin_A(a);

    // a.get_name();

   
}
