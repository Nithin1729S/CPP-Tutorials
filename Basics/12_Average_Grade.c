#include<stdio.h>
#include<stdlib.h>
int main()
{
    int grade1,grade2,grade3;
    double average_grade;
    printf("Enter your First grade:\n");
    scanf("%d",&grade1);
    printf("Enter your Second grade:\n");
    scanf("%d",&grade2);
    printf("Enter your Third grade:\n");
    scanf("%d",&grade3);
    average_grade=(grade1+grade2+grade3)/(double)3;   //or write 3.0 instead of 3
    printf("The average grade is : %.2lf",average_grade);
}

