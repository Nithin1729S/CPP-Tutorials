#include<stdio.h>
int main()
{
    int num;
    int even=0;
    int odd=0;
    int digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        digit=num%10;
        if(digit%2==0) even+=digit;
        else odd+=digit;
        num/=10;
    }
    printf("%d",even-odd);
    return 0;
}