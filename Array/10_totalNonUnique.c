#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
    int arr[SIZE]={5,7,3,4,5,6,8,9,10,3};
    int i,j,flag=0;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if(i==j)
                continue;
            if(arr[i]==arr[j])
                break;
        }
        if(j==10)
            flag++;
    }
    printf("No. of non Unique values are %d",(SIZE-flag)/2);
    return 0;
}