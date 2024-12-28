#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
    int arr[SIZE];
    printf("Enter the elements of the array.\n");
    for(int i=0;i<SIZE;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<SIZE;i++)
        printf("%d ",arr[i]);
    for(int i=0;i<SIZE-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            printf("\nArray not Sorted..");
            return 0;
        }
            
    }
    printf("\nArray sorted..");
    return 0;

}