#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<unique_ptr<int>>nums;
    unique_ptr<int>p1=make_unique<int>(100);
    cout<<*p1<<endl;
    *p1=200;
    cout<<*p1<<endl;
    nums.push_back(move(p1));
}