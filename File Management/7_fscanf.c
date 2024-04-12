#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fp;

    fp=fopen("myThirdFile.txt","r");

    if(fp!=NULL)
    {
        fscanf(fp,"%d",&num);
        printf("From File : %d",num);
        fclose(fp);
    }
    return 0;
}