#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        virtual void say_hello() const{
            cout<<"Hello from base"<<endl;
        }
};

class Derived:public Base{
    public:
        void say_hello() const{
            cout<<"Hello from Derived"<<endl;
        }
};


void greetings(const Base&obj){
    obj.say_hello();
}

int main(){
    Base b;
    Derived d;
    greetings(b);
    greetings(d);

    Base*ptr=new Derived();
    ptr->say_hello();
}   