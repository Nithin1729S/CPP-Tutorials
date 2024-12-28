#include<stdio.h>
void print(int num)
{
    if(num==0) return 0;
    print(num-1);
    printf("%d ",num);
}

int main()
{
    print(4);
    return 0;
}