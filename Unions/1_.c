#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union info
{
    char firstName[20];
    int age;
};


union minmax
{
    int min;
    int max;
    double avg;
};

int main()
{
    union info myvar1;
    myvar1.age=30;
    printf("myvar1.age = %d\n",myvar1.age);
    strcpy(myvar1.firstName,"Hello!");
    printf("myvar1.firstName = %s\n",myvar1.firstName);
    printf("myvar1.age = %d\n",myvar1.age);
    return 0;

}

