#include<stdio.h>
#include<stdlib.h>


void printMinMax(int num1,int num2)
{
    if (num1>num2){
        printf("Max:%d\n",num1);
        printf("Min:%d\n",num2);

    }else{
        printf("Max:%d\n",num2);
        printf("Min:%d\n",num1);
    }
}

int main()
{
    printf("First\n");
    printMinMax(9,83);   
    printf("Last"); 
    return 0;
}