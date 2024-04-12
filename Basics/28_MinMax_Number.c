#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num1,num2,max,min;
    printf("Enter first number.\n");
    scanf("%f",&num1);
    printf("Enter second number.\n");
    scanf("%f",&num2);
    
    if(num1>num2)
    {
        printf("Maximum = %f\n",num1);
        printf("Minimum = %f\n",num2);
    }
    else 
    {
        printf("Maximum = %f\n",num2);
        printf("Minimum = %f\n",num1);
    }
return 0;

}

