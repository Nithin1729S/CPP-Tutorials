#include<stdio.h>
#include<stdlib.h>
#define SIZE 7

int* createArray()
{
    int *arr;
    arr=(int*)malloc(SIZE*sizeof(int));
    if(!arr)
    {
        printf("Error!!!");
        return NULL;
    }
    printf("Enter the elements of your array:\n");
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter the element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    return arr;
}
int main()
{
    int* arr;
    arr=createArray();
    for(int i=0;i<SIZE;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}