#include<stdio.h>
#include<stdlib.h>
#include<string.h>  


int main()
{
    char str1[]="Nithin";
    char *str2="Johann";
    printf("String1 Before: %s\n",str1);
    printf("String1 Before: %s\n",str2);
    str2="Mr. Bruh";
    //str1="Mr. BRuh";
    printf("String1 After: %s",str2);
}