#include<stdio.h>
#include<stdlib.h>
int main()
{
    char grade;
    printf("Enter your grade (A-F):\n");
    scanf("%c",&grade);

    if (grade=='A')  
    printf("Grade is between 90 - 100\n");

    else if (grade=='B') 
    printf("Grade is between 80 - 89\n");

    else if (grade=='C')
    printf("Grade is between 70-79\n");

    else if (grade =='D')
    printf("Grade is between 60-69");

    else
    printf("ERROR..TRY AGAIN! \n");


    return 0;
}