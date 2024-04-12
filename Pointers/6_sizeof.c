#include<stdio.h>
#include<stdlib.h>
int main()
{
    int  num1,num2;
    char myChar;
    double num3;

    int *ptr1=&num1;
    char *ptr2=&myChar;
    double *ptr3=&num3;
    printf("%d\n",sizeof(num1));
    printf("%d\n",sizeof(num1+num2));
    printf("%d\n",sizeof(num1)+sizeof(num2));
    printf("%d\n",sizeof('a'));
    printf("%d\n",sizeof("a"));


    printf("%d\n",sizeof(ptr1));
    printf("%d\n",sizeof(ptr2));
    printf("%d\n",sizeof(ptr3));

    int arr[6];
    int *aPtr=arr;

    printf("%p\n",aPtr);
    printf("%p\n",arr);
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(aPtr));



    return 0;
}