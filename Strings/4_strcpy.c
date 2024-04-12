#include<stdio.h>


char *strcpy(char *destination,char *source)
{
    int i=0;

    while(source[i]!=0)
    {
        destination[i]=source[i];
        i++;
    }
    destination[i]='\0';

    return destination;
}


int main()
{
    char myName[]="Nithin";
    char copyOfName[60];
    char *tempResult;
    tempResult=strcpy(copyOfName,myName);  //we want strlen to return the address of the first character of the resultant string
    printf("The new copy of the string is %s",tempResult);
    printf("The new copy of the string is %s",copyOfName);
    //copyOfName and tempResult both have the address of the first element of the copied array thats what name of the array is.
    return 0;
}