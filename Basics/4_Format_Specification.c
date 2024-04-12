#include<stdio.h>
int main()
{
    printf("I am %d years old\n",20);  //this %d is a  place holder which gets replaced by 20 here
    printf("Today I am %d years old and  next year I'm going to be %d years old\n",20,21);
    printf("My average grade: %d\n",93.7);//this gives unexpected results ,So use %f for floating point numbers
    printf("My average grade: %f\n",93.7);
    printf("My average grade: %.1f\n",93.7);   //This gives only one digit after the decimal point
    printf("We have %d coins in the bank\n", 100);
 printf("We have %f coins in the bank\n", 125.7);
 printf("Year = %d\n", 2020); 
 printf("Your average grade is: %f \n", 95.13);
 printf("num1 = %d, num2 = %d, sum = %d \n", 5, 7, 5+7);
 printf("num1 = %f, num2 = %f, sum = %f \n", 5.2, 7.3, 9.5);
 printf("num1 = %d, num2 = %d, sub = %d \n", 5, 3, 5-3);
 printf("a = %d, b = %d, sum = a + b = %d \n" , 3, 5, 3+5);
 printf("a = %d, b = %d, sum = %d + %d = %d \n" , 3, 5, 3, 5, 3+5);
 printf("a = %d, b = %d, sum = a + b = %d + %d = %d \n" , 3, 5, 3, 5, 3+5);



    return 0;

}
//These %d,%f are simply used as placeholders.
//%d is used for integers and %f for floating point numbers and %c for characters and %lf for double 

