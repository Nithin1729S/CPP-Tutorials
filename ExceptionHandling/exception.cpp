#include<bits/stdc++.h>
using namespace std;
int main()
{
    int miles{};
    int gallon{};
    double miles_per_gallon{};

    cout<<"Enter the miles:";
    cin>>miles;
    cout<<"Enter the gallons:";
    cin>>gallon;

    try
    {
        if(gallon==0)
        {
            throw 0;
        }
        miles_per_gallon=static_cast<double>(miles)/gallon;
        cout<<"Result: "<<miles_per_gallon<<endl;
    }
    catch(int &ex)
    {
        cerr<<"Division by zero not allowed"<<endl;
    }
    cout<<"BYE"<<endl;
    return 0;
}