#include<stdio.h>
#include<stdlib.h>
int main()
{
    //RElational operators are signs > < <= >= == != 
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if (num%2==0)
    printf("It's a even number.");
    else
    printf("It's a odd number.");
    return 0;
}
