#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;

    fp=fopen("mySecondFile.txt","w");

    if(fp!=NULL)
    {
        fputc('F',fp);
        fputc('U',fp);
        fputc('C',fp);
        fputc('K',fp);
        
        fclose(fp);
    }

    

    return 0;
}