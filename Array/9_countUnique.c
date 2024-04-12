#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int main()
{
    int arr[SIZE]={1,1,3,4,6};
    int flag=0,i=0,j=0;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if(i==j)
                 continue;
            if (arr[i]==arr[j])
                break;
        }
        if(j==SIZE)
        {
            printf("%d ",arr[i]);
            flag++;

        }
    }

    printf("The number of unique elements is %d",flag);
    return 0;
}