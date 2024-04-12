#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char sentence[40];
    int countWords=1;

    printf("Enter a string:\n");
    gets(sentence);

    for (size_t i=0;i<strlen(sentence);i++)
    {
        if (sentence[i]==' ')
           countWords++;


    }

    printf("Total amount of words in **%s** is %d\n",sentence,countWords);

    return 0;


}