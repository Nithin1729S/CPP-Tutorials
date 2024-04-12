#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char readChar;
    int count=0;
    fp=fopen("exercise1.txt","r");

    if (fp!=NULL)
    {
        while((readChar=fgetc(fp))!=EOF)
        {
            printf("%c\n",readChar);
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