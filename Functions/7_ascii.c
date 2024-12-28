#include<stdio.h>
#include<string.h>
#include<ctype.h>


int function(char a,char b,char c)
{
    int num=0;
    if(isdigit(a) && isdigit(b) && isdigit(c))
    {
        num+=(c-'0');
        num+=(b-'0')*10;
        num+=(a-'0')*100;
        return num;
    }
    else return 0;
}
int main()
{
    
    printf("%d",function('1','v','3'));
    return 0;
}