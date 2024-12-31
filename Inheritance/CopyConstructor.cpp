#include<iostream>
using namespace std;

class Base{
    private:
        int value;
    public:
        Base():value{0}{
            cout<<"Base no args constructor"<<endl;
        }
        Base(int x):value{x}{
            cout<<"Base overloaded constructor"<<endl;
        }
        Base(const Base&other):value{other.value}
        {
            cout<<"Base copy constructor"<<endl;
        }

        Base& operator=(const Base&rhs){
            cout<<"Base operator ="<<endl;
            if(this!=&rhs){
                this->value=rhs.value;
            }
            return *this;
        }
};

class Derived :public Base{
    private:
        int derived_value;
    public:
        Derived():Base(){
            cout<<"Derived no args constructor"<<endl;
        }
        Derived(int x):Base(x),derived_value{x*2}{
            cout<<"Derived overloaded constructor"<<endl;
        }
        Derived(const Derived&other):Base(other),derived_value{other.derived_value}{
            cout<<"Derived copy constructor"<<endl;
        }
        Derived& operator=(const Derived&rhs){
            cout<<"Derived operator ="<<endl;
            if(this!=&rhs){
                Base::operator=(rhs);
                derived_value=rhs.derived_value;
            }
            return *this;
        }
};

int main()
{
    // Base b{100};
    // Base b1{b};
    // b=b1;

    Derived d1{100};
    Derived d2{d1};
    d1=d2;

}

