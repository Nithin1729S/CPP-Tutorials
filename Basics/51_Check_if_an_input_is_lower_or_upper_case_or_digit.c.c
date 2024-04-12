#include<stdio.h>
#include<stdlib.h>
int main()
{
    char letter;
    printf("Enter a character:\n");
    scanf("%c",&letter);

    if (letter>='A' && letter <='Z')
    printf("It's a uppercase!\n");

    else if(letter>='a' && letter<='z')
    printf("It's a lowercase.\n");

    else if (letter>='0' && letter<='9')
    printf("It's a digit.\n");

    else 
    printf("Other....!\n");

    return 0;
}//In C programming, a character variable holds ASCII value (an integer number between 0 and 127) rather than that character itself. This integer value is the ASCII code of the character
