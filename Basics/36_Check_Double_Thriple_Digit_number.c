#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Please enter a number:\n");
    scanf("%d",&num);
    
    if (num>=10 && num<=99)
    printf("Double Digit Number.\n");

    else if (num>=100 && num<=999)
    printf("Triple Digit Number.\n");

    else
    printf("This number is neither double not triple digit number.\n");
    

    
    return 0;
}