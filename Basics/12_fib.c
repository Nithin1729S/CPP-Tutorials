#include<stdio.h>
int main()
{
    int f0=1;
    int f1=1;
    int n=15;
    int temp;
    printf("%d ",f0);
    printf("%d ",f1);
    for(int i=0;i<n;i++)
    {
        temp=f0+f1;
        printf("%d ",temp);
        f0=f1;
        f1=temp;
    }
    return 0;
}