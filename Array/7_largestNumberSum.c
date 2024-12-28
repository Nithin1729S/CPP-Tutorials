#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 5
int main()
{
    int arr[SIZE]={1,2,3,7,1};
    int max=0;
    for(int i=0;i<SIZE-1;i++)
    {
        if(arr[i]+arr[i+1]>max)
            max=arr[i]+arr[i+1];
    }
    printf("%d",max);
    return 0;


}