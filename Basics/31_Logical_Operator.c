#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Logical operators can have teh result as true or false.
    //And or not are the three logical operators.
    int money;
    int grade;
    printf("Enter money and grade: \n");
    scanf("%d",&money,&grade);

    if(money<50 && grade>90)  //&& is similar to and 
    printf("You get a tuition fee waiver!!!");

    if(money<50 || grade>90)   //|| is similar to or
    printf("You get smth");

    //! is similar to not 

    if (!(grade>80))    //Not logical operator .Good job will be printed only if grade is 80 or less than that
    printf("Good Job!\n");




}