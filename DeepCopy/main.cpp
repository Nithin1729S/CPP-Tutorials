#include<bits/stdc++.h>
using namespace std;
class Deep
{
    int* data;
    public:
        void set_data_value(int d) { *data = d; }
        int get_data_value() { return *data; }
        Deep(int d);
        Deep(const Deep&source);
        ~Deep();
};

Deep::Deep(int d)
{
    data=new int;
    *data=d;
}

Deep::Deep(const Deep &source)
{
    data=new int;
    *data=*source.data;
    cout<<"Deep copied"<<endl;
}

Deep::~Deep()
{
    delete data;
    cout<<"Destructor called"<<endl;
}

void display_deep(Deep s) {
    cout << s.get_data_value() << endl;
}


int main() {
    
    Deep obj1 {100};
    display_deep(obj1);
    
    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    
    return 0;
}