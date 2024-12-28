#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    printf("%d\n",(rand()%(100))+1);  //random number between 1 to 100 including 1 and 100.
    return 0;
}