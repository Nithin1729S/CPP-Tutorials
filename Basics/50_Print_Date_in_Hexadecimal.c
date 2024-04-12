#include<stdio.h>
int main()
{
    int year,month,day;
    printf("Enter the day, month and year:\n");
    scanf("%d%d%d",&day,&month,&year);
 

    printf("\nDay: 0x%X \n",day);
    printf("Month: 0x%X \n",month);
    printf("Year: 0x%X \n",year);

    return 0;
}