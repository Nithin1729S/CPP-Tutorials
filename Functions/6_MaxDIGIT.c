#include<stdio.h>
#include<stdlib.h>

int maxDigit(int num)
{
    int num1=num/10;
    int num2=num%10;

    if (num1>num2)
        return num1;
    else
        return num2;
}

int main()
{
    int num,max;

    do{
        printf("Enter a two digit number:");
        scanf("%d",&num);

    }while(num>100 || num <9);

    max=maxDigit(num);

    printf("MaxDIGIT: %d",max);
    

    return 0;
}