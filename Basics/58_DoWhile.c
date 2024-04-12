#include<stdio.h>
#include<stdlib.h>
int main()
{
    int price,totalPrice=0;

    do {
        printf("Enter a price:");
        scanf("%d",&price);
        totalPrice+=price;

    }while(price!=0);

    printf("The total price is %d",totalPrice);
    return 0;

}