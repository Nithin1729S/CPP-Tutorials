//Swapping variable's values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10;
    int b=20;
    int temp;
    printf("Before Swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    // a=b;   This is a fail as value of a is lost 
    // b=a;
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}