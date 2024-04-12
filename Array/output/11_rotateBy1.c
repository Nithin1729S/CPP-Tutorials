#include<stdio.h>

#define SIZE 5
int main()
{
    int arr[SIZE]={1,2,3,4,5};
    int i,temp;

    temp=arr[0];
    for(int i=1;i<SIZE;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[SIZE-1] =temp;

    for(int i=0;i<SIZE;i++) printf("%d ",arr[i]);


}