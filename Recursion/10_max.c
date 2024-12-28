#include<stdio.h>
int findMax(int num)
{
    int input;
    scanf("%d",&input);
    int curr;
    if(num>1)
    {
        curr=findMax(num-1);
        if(input>curr) return input;
        else return curr;

    }
}

int main()
{
    printf("%d ",findMax(5));
    return 0;
}