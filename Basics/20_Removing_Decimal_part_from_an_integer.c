#include<stdio.h>
#include<stdlib.h>
int main()
{
    float data;
    float result;
    printf("Enter a floating point number: \n");
    scanf("%f",&data);
    printf("The integer part of the number entered: %d\n",(int)data); //Use explicit conversion not just use %d as this would print a garbage value.
    

    printf("The decimal part of the number entered: %.2f\n",data-(int)data);
    return 0;
}