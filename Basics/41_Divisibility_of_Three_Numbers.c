#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);

    if (a==0||b==0||c==0)
    printf("Cannot divide by zero\n");

    else if ((a%b==0 || b%a==0)&&(b%c==0 || c%b==0)&&(a%c==0||c%a==0))
    printf("Divisible Numbers\n");

    else
    printf("Not Divisible Numbers\n");



    return 0;
}