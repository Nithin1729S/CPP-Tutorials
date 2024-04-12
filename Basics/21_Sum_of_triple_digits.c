#include<stdio.h>
#include<stdlib.h>
int main()
{
    int number;
    int units,tens,hundreds;
    printf("Enter a three digit number: ");
    scanf("%d",&number);
    
    units=number%10;
    tens=(number/10)%10;
    hundreds=number/100;
    printf("\nThe total sum of digits in %d is %d.\n",number,units+tens+hundreds);

    return 0;
}