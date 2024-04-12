#include<stdio.h>
#include<stdlib.h>

// int main()
// {
//     int num1=5,num2=2;
//     int result;         //If result was intialized as int we would get 2
//                         //if result was intialized as double here we also would get 2.000000
//     result = num1/num2; //the value obtained in num1/num2 is type casted to int before assigning to the result variable
//     printf("Result = %d\n",result);



// }


//Whenever you make a mathematical operation between two numbers of the same type you getby default will be actually of the same particular type.
//Whenver you divide int 5 by int 2 it is always rounded to a integer before assigning it to a variable

//Implicit Casting: This casting is done behind the scenes and we dont explitly specify that we want to make type conversion
//Whenver you make mathematical operation between integer and a floating point number the result of this operation will always be treated as it would have been done between two floating numbers.ie result will be a floating point type
//

int main()
{
    int num1=5;
    double num2=2.0;
    double result;         //If result was intialized as int we would get 2
                        //if result was intialized as double here we would get 2.000000
    result = num1/num2; //the value obtained in num1/num2 is type casted to int before assigning to the result variable
    printf("Result = %lf\n",result);
}




