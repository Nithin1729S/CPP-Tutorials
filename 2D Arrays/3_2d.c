#include<stdio.h>
#include<stdlib.h>
#define SIZE 11
int main()
{
    int mat[SIZE][SIZE];

    for(int i=1;i<SIZE;i++)
        for(int j=1;j<SIZE;j++)
            mat[i][j]=i*j;

    for(int i=1;i<SIZE;i++)
    {
        for(int j=1;j<SIZE;j++)
        {
            printf("%5d",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
        


}