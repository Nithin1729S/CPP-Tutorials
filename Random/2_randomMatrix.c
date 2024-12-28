#include <stdio.h>
#include <stdlib.h>
#include <time.h> // For seeding the random number generator

void generateRandomMatrix(int rows, int cols, int matrix[rows][cols]) {
    // Generate random values for the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = rand() % 100 +1;  // Generate random values between 1 and 100 including 1 and 100...
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    //Function to print the matrix...
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows1,rows2,cols1,cols2;
    printf("Enter the number of rows of 1st matrix: ");
    scanf("%d",&rows1);
    printf("Enter the number of columns of 1st matrix: ");
    scanf("%d",&cols1);
    printf("Enter the number of rows of 2nd matrix: ");
    scanf("%d",&rows2);
    printf("Enter the number of columns of 2nd matrix: ");
    scanf("%d",&cols2);

    if(cols1!=rows2)
    {
        printf("Matrix Multiplication is not possible!");
        return 0;
    }
   
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    
    generateRandomMatrix(rows1, cols1, matrix1);
    srand(time(NULL));                                            // Seed the random number generator with the current time
    generateRandomMatrix(rows2, cols2, matrix2);
    
    printf("Matrix 1:\n");
    printMatrix(rows1, cols1, matrix1);
    
    printf("\nMatrix 2:\n");
    printMatrix(rows2, cols2, matrix2);
    
    return 0;
}
