#include<bits/stdc++.h>
using namespace std;
class Base
{
    public:
        int a{0};
        void display(){cout<<a<<" ,"<<b<<", "<<c<<endl;}
    protected:
        int b{0};
    private:
        int c{0};
};

class Derived: public Base{
    public:
        void access()
        {
            a=100;
            b=100;
            // c=100;
        }

};

int main()
{
    Base base;
    base.a=100;
    // base.b=200;
    // base.c=300;

    Derived d;
    d.a=100;
    // d.b=100;
    // d.c=100;
    return 0;
}