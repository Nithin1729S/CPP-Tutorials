#include<stdio.h>
#include<stdlib.h>

int* createArray(int n)
{
    int *a;
    a=(int*)malloc(n*sizeof(int));
    if(!a)
        return NULL;
    printf("Enter your grades:\n");
    for(int i=0;i<n;i++)
    {
        printf("Enter Grade %d: ",i+1);
        scanf("%d",&a[i]);
    }
    return a;
}

void printArray(int*a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int*grades;
    int arraySize;
    printf("Enter the number of grades:\n");
    scanf("%d",&arraySize);
    grades=createArray(arraySize);
    printArray(grades,arraySize);
    return 0;
}