#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fp;

    fp=fopen("myFirstFile.txt","r");

    if(fp==NULL)
     printf("The opening of the file has failed.");
    else
    {
        printf("The file is opened for reading.");
        fclose(fp);
    }

    

    return 0;
}