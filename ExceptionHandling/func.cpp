#include<bits/stdc++.h>
using namespace std;

double average(int sum,int total)
{
    if(total==0)
    {
        throw 0;
    }
    if(sum<0 || total<0)
    {
        throw string{"Negative value error"};
    }
    return static_cast<double>(sum)/total;
}

int main()
{
    int total{};
    int sum{};
    cin>>total>>sum;
    int res{};

    try{
        res=average(sum,total);

    }
    catch(int &ex)
    {
        cerr<<"DIvision by zero"<<endl;
    }
    catch(string &str)
    {
        cerr<<str<<endl;
    }
    catch(...)
    {
        cerr<<string{"Unknown Error"}<<endl;
    }
    cout<<res<<endl;
    cout<<"BYE"<<endl;

}