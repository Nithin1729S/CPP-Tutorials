#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("new.txt","r");
    char arr[100];
    fgets(arr,sizeof(arr),ptr);

    printf("The line I read was %s\n",arr);

    return 0;
}

