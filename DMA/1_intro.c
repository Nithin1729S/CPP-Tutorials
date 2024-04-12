#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
    int *a;
    int arraySize;
    scanf("%d",&arraySize);
    a=(int*)malloc(sizeof(int)*arraySize);

    if(a!=NULL)
        printf("Allocation Successful\n");
    else
        printf("Allocation Unsuccessful\n");

    return 0;

}