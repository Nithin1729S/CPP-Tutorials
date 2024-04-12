#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=32;
    FILE *fp;

    fp=fopen("myThirdFile.txt","w");

    if(fp!=NULL)
    {
        fprintf(fp,"%d",num);
        fclose(fp);
    }
    return 0;
}