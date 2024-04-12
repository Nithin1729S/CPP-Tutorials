#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

char* strConcat(char *originalStr)
{
    int lengthOriginal=strlen(originalStr);
    char* newStr;
    int i;
    newStr=(char*)malloc(2*lengthOriginal*sizeof(char) +1);
    for(i=0;i<strlen(originalStr);i++)
    {
        newStr[i]=originalStr[i];
        newStr[i+lengthOriginal]=originalStr[i];
    }
    newStr[i+lengthOriginal]='\0';
    return newStr;
}

int main()
{
    char lol[6]="Alpha";
    char *lol1=strConcat(lol);
    printf("%s",lol1);
    return 0;

}
