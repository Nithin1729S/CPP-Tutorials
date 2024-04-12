#include<stdio.h>
#include<stdlib.h>

struct point
{
    int x;
    int y;
};

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct point p1;
    printf("Enter the x coordinate: \n");
    scanf("%d",&p1.x);
    printf("Enter the y coordinate: \n");
    scanf("%d",&p1.y);

    printf("The point is (%d,%d)\n",p1.x,p1.y);

    struct date birthDate;
    printf("Enter day:\n");
    scanf("%d",&birthDate.day);
    printf("Enter month:\n");
    scanf("%d",&birthDate.month);
    printf("Enter year:\n");
    scanf("%d",&birthDate.year);

    printf("Your birth date is %d/%d/%d\n",birthDate.day,birthDate.month,birthDate.year);

    return 0;
}