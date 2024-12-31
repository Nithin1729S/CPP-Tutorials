#include <iostream>

using namespace std;

class Base {
private:
    int value;
public:
   Base(int x) : value{x} { cout << "Base (int) overloaded constructor" << endl; }
   Base() : Base(0) { cout << "Base no-args constructor" << endl; }
   ~Base(){ cout << "Base destructor" << endl; }
};

class Derived : public Base {
private:
    int doubled_value;
public:
    Derived(int x) :Base(x),doubled_value {x*2}  { cout << "Derived (int) overloaded constructor" << endl; }
    Derived() : Derived(0) { cout << "Derived no-args constructor " << endl; } 
    ~Derived() { cout << "Derived destructor " << endl; } 
};

int main() {
 Derived d;
    
    return 0;
}