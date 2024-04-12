#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,pow,result=1;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("Enter the power:\n");
    scanf("%d",&pow);

    for(int i=1;i<=pow;i++){
        result*=num;

    }

    printf("Result: %d",result);
    return 0;

}