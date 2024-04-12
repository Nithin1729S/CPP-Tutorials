#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    puts("Hey Yay");
    puts("Line Down");
    fp=fopen("myFourthFile.txt","w");
    if(fp!=NULL)
    {
        fputs("Hi! There Hello!",fp);
        fputs("Lol",fp);
        fclose(fp);
    }

    return 0;
}

