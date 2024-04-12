#include<stdio.h>

int nCr(int n, int r) {
    if (r == 0 || n == r) return 1;
    else return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main()
{
    int n=10;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i-1;j++) printf(" ");
        for(int j=0;j<=i;j++) printf("%2d ",nCr(i,j));
        for(int j=1;j<=n-i-1;j++) printf(" ");
        printf("\n");
    }
    return 0;
}