#include<stdio.h>
#include<stdlib.h>

int sumUpTo(int num)
{
    if (num==1)
        return 1;
    return num + sumUpTo(num-1);
}


int main()
{
    int num,result;
    printf("Enter your number:\n");
    scanf("%d",&num);

    result=sumUpTo(num);
    printf("Sum = %d",result);
    return 0;
}