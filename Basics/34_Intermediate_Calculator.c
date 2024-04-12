#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2;
    char math_operation;

    printf("Enter what math operation you would like to use: ('+', '-',..)\n");
    scanf("%c",&math_operation);
    printf("Enter num1:\n");
    scanf("%d",&num1);
    printf("Enter num2:\n");
    scanf("%d",&num2);

    switch(math_operation)
    {
        case '+':
        printf("%d %c %d = %d\n",num1,math_operation,num2,num1+num2);
        break;
        
        case '-':
        printf("%d %c %d = %d\n",num1,math_operation,num2,num1-num2);
        break;

        case '*':
        printf("%d %c %d = %d\n",num1,math_operation,num2,num1*num2);
        break;

        case '/':
        if(num2==0)
        printf("You cannot divide by zero");
        else
        printf("%d %c %d = %d\n",num1,math_operation,num2,num1/num2);
        break;

        case '%':
        if(num2==0)
        {printf("You cannot divide by zero");}
        else
        printf("%d %c %d = %d\n",num1,math_operation,num2,num1%num2);
        break;

        default:
        printf("Wrong Mathematical Operation");
        break;


        




    }


    return 0;

}
