#include<stdio.h>
#include<stdlib.h>
int main()
{
    char myChar1='a';//a has 97 as decimal ascii code and 61 as hexadecimal ascii code.
    char myChar2=97;
    char myChar3=0x61;
    //We have created three variables of the same value.Only the difference is teh way we created them and the format of the value we asssigned them with.
    //All three will have the same binary value which is stored in the memory location.
    //We say the compiler to put the binary value of 97 in the memory location and name the memory location as myChar2

    printf("Character: %c\n",myChar1);
    printf("Decimal ASCII Code: %d\n",myChar1);
    printf("Hexadecimal ASCII Code: %X\n",myChar1);//%X is used to print hexadecimal numbers.
//97 and 61 are printed whcih can be confirmed by looking at the ascii table.

    printf("Character: %c\n",myChar2);//a is printed
    printf("Decimal ASCII Code: %d\n",myChar2);
    printf("Hexadecimal ASCII Code: %X\n",myChar2);

    printf("Character: %c\n",myChar3);
    printf("Decimal ASCII Code: %d\n",myChar3);
    printf("Hexadecimal ASCII Code: %X\n",myChar3);

//If you print the above variables as characters you will get a for all of them.
//If you print ascii code of all the above variables you will print 97
//If you print in hexa you will get 61 for all
    return 0;

}