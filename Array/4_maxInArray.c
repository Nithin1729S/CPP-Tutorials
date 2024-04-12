#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

int maxEle(int *ptr,int size)
{
    int max=ptr[0];
    for(int i=0;i<size;i++)
    {
        if(ptr[i]>max)
            max=ptr[i];
    }
    return max;
}

int main()
{
    int grades[10]={0};
    int max;
    for(int i=0;i<SIZE;i++)
    {
        printf("Enter element no.%d\n",i+1);
        scanf("%d",&grades[i]);
    }

    max=maxEle(grades,SIZE);
    printf("The max element of the array is %d\n",max);
    return 0;

}

