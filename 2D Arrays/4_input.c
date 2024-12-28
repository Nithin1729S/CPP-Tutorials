#include<stdio.h>
#include<stdlib.h>
#define SIZE 3
int main()
{
    int i,j;
    int mat[SIZE][SIZE];
    printf("Enter the elements of your 3 by 3 matrix:\n");
    for(i=0;i<SIZE;i++)
    {
        printf("Enter the elements of row %d : ",i+1);
        for(j=0;j<SIZE;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The Entered Matrix:\n");
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            printf("%5d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

