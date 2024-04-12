#include<stdio.h>
#include<stdlib.h>
int main() {
    int no_of_terms;
    float intial_term;
    float diff;
    float nth_term;
    printf("Enter the Initial term:\n");
    scanf("%f", &intial_term);
    printf("Enter the Number of terms:\n");
    scanf("%d", &no_of_terms);
    printf("Enter the Common Difference:\n ");
    scanf("%f", &diff);
    nth_term = intial_term + (no_of_terms - 1) * diff;
    printf("The nth term of the arithmetic sequence is %.2f", nth_term);
    return 0;
}








