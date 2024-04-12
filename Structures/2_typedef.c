#include<stdio.h>
#include<stdlib.h>

typedef struct date
{
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

int main()
{
    Date graduationDate,birthDate;
    graduationDate=inputDate();
    birthDate=inputDate();
    printDate(graduationDate);
    printDate(birthDate);
    

    return 0;
}

