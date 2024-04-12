#include<stdlib.h>
#include<stdio.h>
int main()
{
    int num,pow,tempPow;
    int result=1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the power:\n");
    scanf("%d",&pow);
    tempPow=pow;//To hold the actual value of pow (as pow value changes in each iteration)so that we can print it later 
    while(pow>0)
    {
        result*=num;
        pow--;
    }
    printf("%d^%d = %d\n",num,tempPow,result);
    return 0;
}