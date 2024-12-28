#include<stdio.h>

int totalSmaller(int num)
{
    int input;
    printf("Please enter a number: ");
    scanf("%d",&input);
    if(input==-1) return 0;
    if(input<num) return 1+totalSmaller(num);
    return totalSmaller(num);

}
int main()
{   
    printf("%d",totalSmaller(6));
    return 0;
}