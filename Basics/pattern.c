#include<stdio.h>
int main()
{
    int n=4;
    int flg=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++) printf(" ");
        for(int j=1;j<=i;j++) printf("%d ",flg);
        flg++;
        for(int j=1;j<=n-i;j++) printf(" ");
        printf("\n");
    }
}