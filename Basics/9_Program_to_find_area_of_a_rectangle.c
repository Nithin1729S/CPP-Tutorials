#include<stdio.h>
int main()
{
    double lenght,breadth;
    double area;
    printf("Enter Height of the  rectangle:");
    scanf("%f",&lenght);
    printf("Enter Breadth of the  rectangle:");
    scanf("%f",&breadth);
    area = lenght*breadth;
    printf("Area of the rectangle = %f",area);
}