#include<stdio.h>
#include<stdlib.h>
int main()
{
    char myChar1='a';
    char myChar2='O';

    printf("Character: %c\n",myChar1);
    printf("Decimal ASCII Code: %d\n",myChar1);
    printf("Hexadecimal ASCII Code: %X\n",myChar1);//%X is used to print hexadecimal numbers.
//97 and 61 are printed whcih can be confirmed by looking at the ascii table.

    printf("Character: %c\n",myChar2);
    printf("Decimal ASCII Code: %d\n",myChar2);
    printf("Hexadecimal ASCII Code: %X\n",myChar2);

    return 0;

}