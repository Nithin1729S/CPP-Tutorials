#include<stdio.h>
int main()
{
    int n=79;
    int binary[32]={0};
    int idx=0;
    while(n>0)
    {
        binary[idx++]=n%2;
        n/=2;
    }
    for(int i=idx-1;i>=0;i--) printf("%d",binary[i]);
    return 0;

}