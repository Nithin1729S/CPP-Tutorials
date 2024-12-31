#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<shared_ptr<int>>nums;
    auto p1=make_shared<int>(100);
    cout<<p1.use_count()<<endl;
    cout<<*p1<<endl;
    *p1=200;
    cout<<*p1<<endl;
    nums.push_back(p1);
    cout<<p1.use_count()<<endl;
    p1.reset();
    cout<<p1.use_count()<<endl;
}