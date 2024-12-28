#include<stdio.h>
#define N 1
#define SIZE 4

int main()
{
    int i,temp;
    int arr[SIZE]={5,4,7,3};

    for(int j=0;j<N;j++)
    {
        temp=arr[SIZE-1];
        for(i=SIZE-1;i>0;i--) arr[i]=arr[i-1];
        arr[0]=temp;
    }
    



    for(i=0;i<SIZE;i++) printf("%d ",arr[i]);

}