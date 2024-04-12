#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if (num>=0)
    printf("The absolute value of the entered number is = %d",num);
    else
    printf("The absolute value of the entered number is = %d",-(num));
    return 0;

}