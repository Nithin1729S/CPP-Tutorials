#include<stdio.h>
#include<stdlib.h>

typedef struct date{
    int day;
    int month;
    int year;
}Date;

void printDate(Date dt)
{
    printf("%d/%d/%d",dt.day,dt.month,dt.year);
}

Date inputDate()
{
    Date dt;
    printf("Enter day:\n");
    scanf("%d",&dt.day);
    printf("Enter month:\n");
    scanf("%d",&dt.month);
    printf("Enter year:\n");
    scanf("%d",&dt.year);

    return dt;
} 



void printNextDate(Date dt)
{
    dt.day++;
    if(dt.day>31)
    {
        dt.day=1;
        dt.month++;
        if (dt.month>12){
            dt.month++;
            dt.year++;
        }
    }

    printf("The next dat is :\n");
    printDate(dt);

}

int main()
{
    Date todayDate={31,12,2009};
    printf("Current Date: \n");
    printDate(todayDate);
    printNextDate(todayDate);
    return 0;

}