
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float initial_term;
    float last_term;
    int no_of_terms;
    float sum;
    printf("Enter the First term of the sequence:\n");
    scanf("%f",&initial_term);
    printf("Enter the Number of terms:\n");
    scanf("%d",&no_of_terms);
    printf("Enter the last term:\n");
    scanf("%f",&last_term);
    sum=(initial_term+last_term)*(no_of_terms/2);
    printf("The sum of the sequence is %.2f",sum);
    return 0;
}