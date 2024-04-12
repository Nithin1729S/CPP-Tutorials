#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x=5;
    int y=7;

    printf("%d\n",x&y);
    printf("%d\n",x|y);
    printf("%d\n",x^y);
    printf("%d\n",~x);
    return 0;
}