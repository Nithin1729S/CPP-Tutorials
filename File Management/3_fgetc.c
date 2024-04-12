#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char myChar1,myChar2;

    fp=fopen("myFirstFile.txt","r");

    if(fp!=NULL)
    {
        printf("The file is Opened for reading!\n");

        myChar1=fgetc(fp);
        printf("The first character that was read was %c\n",myChar1);

        myChar1=fgetc(fp);
        printf("The second character that was read was %c\n",myChar1);
        fclose(fp);

    }

    myChar2=fgetc(stdin);
    printf("The first character that was read from the keyboard is %c\n",myChar2);
    



}

