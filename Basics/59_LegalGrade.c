#include<stdio.h>
#include<stdlib.h>
int main()
{
    int grade;
    do{
        printf("Enter a grade:");
        scanf("%d",&grade);

    }while (grade<0 || grade>100);

    printf("Thanks! You've inserted %d, which is a legal grade!\n",grade);
    return 0;
}