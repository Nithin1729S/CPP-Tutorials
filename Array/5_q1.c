#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int main()
{
    int date[SIZE]={1,12,2000};
    int date2[SIZE];
    for(int i=0;i<SIZE;i++)
    {
        date2[i]=date[i];
    }
    for(int i=0;i<SIZE;i++)
    {
        printf("%d ",date2[i]);
    }
    return 0;
}