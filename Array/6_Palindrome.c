#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 3
int main()
{   
    int flag=1;
    char arr[SIZE]={'M','O','M'};
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]!=arr[SIZE-i-1])
            flag=0;
    }
    if(flag==0)
        printf("Array is not a Palindrome.");
    else
        printf("Array is a Palindrome.");
}