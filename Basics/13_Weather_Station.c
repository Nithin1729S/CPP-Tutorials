#include<stdio.h>
#include<stdlib.h>
int main()
{
    double celsius,fahrenheit;
    printf("Enter the temperature in Celsius:\n");
    scanf("%lf",&celsius);
    fahrenheit=celsius*1.8+32;
    printf("The Temperature in Fahrenheit is %.2lf\n",fahrenheit);
}