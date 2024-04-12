#include<stdio.h>

int sum(int n)
{
    static int sm=0;
    int digit=0;
    if(n>0)
    {
        digit=n%10;
        sm+=digit;
        sum(n/10);
    }
    return sm;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}