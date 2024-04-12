#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr[5];
    for(int i=0;i<5;i++)
    {
        arr[i]=(int *)calloc(3,sizeof(int));
    }
    
}