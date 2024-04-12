#include<stdio.h>
#include<stdlib.h>
int main()
{
    int total_seconds,hrs,minutes;
    int remaining_seconds;
    
    printf("Enter the number of seconds:\n");
    scanf("%d",&total_seconds);

    hrs=total_seconds/3600;
    minutes=(total_seconds-hrs*3600)/60;
    remaining_seconds=total_seconds-(hrs*3600)-(minutes*60);

    printf("Total Hours: %d\n", hrs);
    printf("Total Minutes: %d\n", minutes);
    printf("Total Seconds: %d\n", remaining_seconds);

    return 0;

    


}