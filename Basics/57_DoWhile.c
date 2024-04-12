#include<stdio.h>
#include<stdlib.h>
int main()
{
    int price,totalPrice=0;

    printf("Enter the prices one by one: ");
    scanf("%d",&price);

    while(price!=0){
        totalPrice+=price;
        printf("Enter the prices one by one: ");
        scanf("%d",&price);
    }

    printf("The total price is: %d\n",totalPrice);
    return 0;
}


