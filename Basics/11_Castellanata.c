//If you are  not allowed to change the type of the num1 and num2 we use this way of type casting.This is a explicit way of casting
//We know that one of the numbers in the operation should be floating point number to make the whole result a floating number

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1=5,num2=2;
    double result;
    result= num1/(double)num2;     //here int 2 has been explicitly type casted to double.Even  num1 can be type casted the same way.
    //Remember the  num1 and num2 were not converted to double type here but just typecasted
    printf("Result = %lf",result);


}

//(int)5.2   This would be treated just as 5 