#include<stdio.h>
#include<stdlib.h>

typedef struct date{
    int x;
    int y;
}Point;

void printPoint(Point p)
{
    printf("The coordinates of the point are (%d,%d)\n",p.x,p.y);
}

Point inputPoint()
{
    Point myPoint;
    printf("Enter x coordinate:\n");
    scanf("%d",&myPoint.x);

    printf("Enter y coordinate:\n");
    scanf("%d",&myPoint.y);

    return myPoint;
}

int main()
{
    Point p1=inputPoint();
    printf("P1 before changes\n");
    printPoint(p1);
    p1.x++;
    p1.y++;
    printf("P1 after changes\n");
    printPoint(p1);
    return 0;

}
