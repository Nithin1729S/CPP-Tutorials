#include<stdio.h>
#include<stdlib.h>
int main()
{
    int grade;
    printf("Enter your grade:\n");
    scanf("%d",&grade);

    if (grade>=80)
    printf("Excellent Job!\n");

    else if (grade>=60)
    printf("Not Bad.\n");

    else 
    printf("Oh...You didn't pass...\n");

    return 0;
}