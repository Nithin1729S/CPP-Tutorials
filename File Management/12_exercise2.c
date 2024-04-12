#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE* fp;
    char readChar;
    int count=1;
    fp=fopen("exercise1.txt","r");

    if (fp!=NULL)
    {
        while((readChar=fgetc(fp))!=EOF)
        {
            if(readChar=='\n')
                count++;
        }
    }
    else
    {
        printf("lol");
    }

    printf("\n%d",count);
    return 0;
}