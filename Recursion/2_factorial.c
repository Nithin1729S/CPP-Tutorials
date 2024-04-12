#include<stdio.h>
#include<stdlib.h>

int fact(int num)
{
    if(num==1)
        return 1;
    return num*fact(num-1);

}

int main()
{
    int num;
    long long int factorial;
    printf("Enter a number:\n");
    scanf("%d",&num);
    factorial=fact(num);
    printf("The factorial of %d is %lld",num,factorial);
    return 0;

}