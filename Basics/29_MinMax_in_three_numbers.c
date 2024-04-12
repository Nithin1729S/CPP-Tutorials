#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,max,min;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);

    max = a;
    min = b;
    if(a<b)
    {
        max=b;
        min=a;
    }
    if (max<c)
        max=c;
    
    if (c<min)
        min=c;

    printf("Maximum between three numbers = %d\n",max);
    printf("Minimum between three numbers = %d\n",min);
    




    
}