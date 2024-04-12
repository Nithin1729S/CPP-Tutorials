#include<stdio.h>
#include<stdlib.h>

int fibonacci(int idx)
{
    if(idx==0)
        return 0;
    if(idx==1)
        return 1;
    return fibonacci(idx-1)+fibonacci(idx-2);
}

int main()
{
    int idx;
    printf("%d",fibonacci(idx));
    return 0;

}