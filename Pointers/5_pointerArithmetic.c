#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=30;
    int *ptr;
    printf("%d\n",num);

    ptr=&num;

    printf("%p\n",ptr);
    printf("%p\n",&num);

    *ptr=420;
    printf("%d\n",num);
    
    return 0;
}