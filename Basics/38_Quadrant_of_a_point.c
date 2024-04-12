#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y;
    printf("Enter the x coordinate:\n");
    scanf("%d",&x);
    printf("Enter the y coordinate:\n");
    scanf("%d",&y);

    if (x>0 && y>0)
    printf("This point lies in Quadrant 1.\n");
    else if (x<0 && y>0)
    printf("This point lies in Quadrant 2.\n");
    else if (x<0 && y<0)
    printf("This point lies in Quadrant 3.\n");
    else if (x>0 && y<0)
    printf("This point lies in Quadrant 4.\n");
    else
    printf("The entered point is the origin.\n");

    return 0;



}