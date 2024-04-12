#include<stdio.h>
#include<stdlib.h>
int main()
{
    int grades[3]={20,94,54};
    printf("grades array starts at %p\n",grades);
    printf("grades array starts at %p\n",grades);
    printf("grades array starts at %d\n",*grades);
    printf("address: %p\n",&grades[0]);
    return 0;
}
