#include<stdio.h>
#include<stdlib.h>


int strLen(char* str)
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i;
}

char* strConcat(char* str1,char* str2)
{
    int size=strLen(str1)+strLen(str2);
    int i=0;
    char* res=(char *)malloc(sizeof(char)*size+1);
    for(i=0;i<strLen(str1);i++)
        res[i]=str1[i];
    for(i=0;i<strLen(str2);i++)
        res[i+strLen(str1)]=str2[i];
    return res;
}

int main()
{
    char name[]="Nithin";
    char lastName[]=" S";
    printf("The length of the given string is %d.\n",strLen(name));
    printf("The Concatenated string is %s",strConcat(name,lastName));
    return 0;
}