#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    char myChar1=9; //This is a integer(decimal).This doesnt represent the character 9 in the ascii table.
    //We say the compiler to put in myChar1 a character whose value in decimal is 9.
    //The binary value of 9 is stored 
    char myChar2='9';//This is a character.This would represent the character 9 in the ascii table.So the ascii binary is stored in memory location for 9.

    printf("Character: %c\n",myChar1);
    printf("Decimal ASCII Code: %d\n",myChar1);
    printf("Hexadecimal ASCII Code: %X\n",myChar1);

    printf("Character: %c\n",myChar2);
    printf("Decimal ASCII Code: %d\n",myChar2);
    printf("Hexadecimal ASCII Code: %X\n",myChar2);
    return 0;
}