#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age=20;
    int age1=70;

    int *const ptr=&age;//constant ptr that points to a variable age

    *ptr=30;  //modifying the value of age1 where we point to not the actual pointer

    //ptr=&age2;  //cant be done as it is a constant pointer

    printf("%d",age);

    




}