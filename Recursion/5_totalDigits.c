#include<stdio.h>

int noOfDigits(int num)
{
    if(num<10)
    {
        return 1;
    }
    return 1 + noOfDigits(num/10);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d",noOfDigits(num));
    return 0;
}