#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char readChar;
    int count=0;
    char target='l';
    fp=fopen("exercise5.txt","r");
    while((readChar=fgetc(fp))!=EOF)
    {
        if(readChar==target)
            count++;

    }
    fclose(fp);

    printf("%c is repeated %d times.",target,count);
    return 0;
}