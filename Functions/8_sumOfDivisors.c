#include<stdio.h>

int sumOfDivisors(int num)
{
    if(num==1) return 1;
    int sum=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0) sum+=i;
    }
    return sum+num;
}

int optimized(int num)
{
    int sum=1;
    int i;
    if(num==1) return 1;
    for(i=2;i*i<num;i++)
    {
        if(num%i==0) sum+=i+num/i;
    }
    if(i*i==num) sum+=i;
    return sum+num;
}
int main()
{
    printf("%d\n",sumOfDivisors(6));   
    printf("%d",optimized(6));   
}