#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* fp;

    fp=fopen("myFirstFile.txt","w");

    if(fp==NULL)
     printf("The opening of the file has failed.");
    else
    {
        printf("The file is opened for writing.");
    }

    fclose(fp);

    return 0;
}