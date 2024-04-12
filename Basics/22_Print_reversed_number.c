#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,units,hundreds,tens,reversed_num;
    printf("Enter a 3 digit number:\n");
    scanf("%d",&num);
    units=num%10;
    tens=(num/10)%10;
    hundreds=num/100;
    reversed_num=units;
    reversed_num=reversed_num*10+tens;
    reversed_num=reversed_num*10+hundreds;

    printf("The Reversed Number of %d is %d%d%d",num,reversed_num);
    return 0;
}