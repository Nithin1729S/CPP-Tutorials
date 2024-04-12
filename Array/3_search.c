#include<stdio.h>
#include<stdlib.h>
#define SIZE 4


int findIfKeyInArray(int *arr,int size,int key)
{
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]==key)
            return 1;

    }

    return 0;
}

int main()
{
    int grades[SIZE]={80,90,76};
    int result;
    result=findIfKeyInArray(grades,SIZE,80);
    
}