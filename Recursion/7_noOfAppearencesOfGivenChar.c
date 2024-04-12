#include<stdio.h>

int count(char c)
{
    char v;
    printf("Enter a character: \n");
    scanf(" %c",&v);
    if(v==c) return 1+count(c);
    if(v=='$') return 0;
    return count(c);
}
int main()
{
    printf("%d",count('n'));
}