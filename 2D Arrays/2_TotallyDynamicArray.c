#include<stdio.h>
#include<stdlib.h>
#define ub 100
#define lb 1



int** allocate2DMatrix(int rows,int cols)
{
    int **matrix;
    matrix=(int **)calloc(rows,sizeof(int*));
    if(!matrix)
        return NULL;
    for(int i=0;i<rows;i++)
    {
        matrix[i]=(int*)calloc(cols,sizeof(int));
        if(!matrix[i])
            return NULL;
    }
    return matrix;
}

void fillRandomValues(int **matrix,int rows,int cols) {
    // Function to generate matrix with random values.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % (ub-lb+1)+lb;  // Generate random values between 1 and 100 including 1 and 100...
        }
    }
}


void print2DMatrix(int **matrix,int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%9d",matrix[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int **A,rA=3,cA=3;
    A=allocate2DMatrix(rA,cA);
    fillRandomValues(A,rA,cA);
    print2DMatrix(A,rA,cA);
    return 0;
    

}