#include<stdio.h>
#include<stdlib.h>
#define SIZE 7

int main()
{
    int temps[SIZE]={0};

    for(int i=0;i<SIZE;i++){
        printf("Enter Temperature no.%d\n",i+1);
        scanf("%d",&temps[i]);
    }

    float totalSum=0;
    int hottestDay=0;
    int coolestDay=0;

    for(int i=0;i<SIZE;i++){
        totalSum+=temps[i];

        if(temps[hottestDay]<temps[i]){
            hottestDay=i;
            continue;
        }

        if(temps[coolestDay]>temps[i])
            coolestDay=i;

    }

    printf("The average temperature of the week is %f\n",totalSum/SIZE);
    printf("The hottest temperature of the week is %d\n",temps[hottestDay]);
    printf("The coolest temperature of the week is %d\n",temps[coolestDay]);
    return 0;
}