#include<stdio.h>
#include<stdlib.h>
int main()
{
    float salary_per_hr;
    float hrs_worked;
    printf("Enter the Salary per hour:\n $");  //the space after \n gives space in the next line.
    scanf("%f",&salary_per_hr);

    printf("Enter the Number of hours worked in a month:\n ");
    scanf("%f",&hrs_worked);

    printf("Your expected salary should be: $%.2f\n",salary_per_hr*hrs_worked);

    return 0;

}






