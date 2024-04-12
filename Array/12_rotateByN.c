#include<stdio.h>
#define N 2
#define SIZE 4

int main()
{
    int i,temp;
    int arr[SIZE]={5,4,7,3};

    for(int j=0;j<N;j++)
    {
        temp=arr[0];
    for(i=1;i<SIZE;i++) arr[i-1]=arr[i];
    arr[SIZE-1]=temp;
    }
    



    for(i=0;i<SIZE;i++) printf("%d ",arr[i]);

}