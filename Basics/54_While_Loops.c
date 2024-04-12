//We have While,Do while and for loop.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    //The execution of the loop body from top to bottom is called an iteration.
    int numOfAsterisks;
    int i=0;
    printf("Enter a number of asterisks you would like to see:\n");
    scanf("%d",&numOfAsterisks);

    while (i<numOfAsterisks)
    {
        printf("*");
        i++;//increements i by one in every iteration.
    }
    printf("\n");
    return 0;
}   