#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x;
    int x2,x4,x6,x8;
    printf("Enter x: ");
    scanf("%d",&x);
    x2=x*x;
    x4=x2*x2;
    x6=x4*x2;
    x8=x6*x2;
//Try to minimize the number of times you use multiplication operation as it is a heavy operation and takes time to be calculated.
    printf("X^2 = %d,\nX^4 = %d,\nX^6 = %d,\nX^8 = %d\n",x2,x4,x6,x8);

    return 0;

    



}
