#include<stdio.h>
#include<stdlib.h>


int strlen(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;

}
int main()
{
    char sentence[50];
    int length=0;
    printf("Enter a string to find the length of :\n");
    gets(sentence);
    length=strlen(sentence);
    printf("The length of the string is %d",length);
    return 0;
}