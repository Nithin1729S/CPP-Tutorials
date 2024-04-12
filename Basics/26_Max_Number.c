#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int num1,num2;
    printf("Enter two number:\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    if (num1>num2)
    printf("Max = %f\n",num1);
    else
    printf("Max = %f\n",num2);
    return 0;
}
