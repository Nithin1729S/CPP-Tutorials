#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int H[26];
int main()
{

    FILE*fp=fopen("new.txt","r");
    char c;
    while((c=fgetc(fp))!=EOF)
    {
        if(isalpha(c) && islower(c))
        {
            H[c-97]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(H[i]>0)
        {
            printf("Letter %c is repeated %d times\n",i+97,H[i]);
        }
    }
}