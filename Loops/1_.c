#include<stdio.h>
int main()
{
    // int rows;
    // printf("Enter the number of rows: ");
    // scanf("%d",&rows);
    int rows=3;
    int blankspaces=rows-1;
    int curr=1;

    for(int i=1;i<=rows;i++)
    {
        for(int j=blankspaces;j>=1;j--) printf(" ");
        for(int k=1;k<=i;k++) printf("%d ",curr++);
        printf("\n");
        blankspaces--;
    }
}