#include<stdio.h>
#include<stdlib.h>
int main()
{
    int speed;
    int distance;
    int time_taken_in_hrs;
    float time_taken_in_mins;

    printf("Enter the speed of the car in kmph:\n ");
    scanf("%d",&speed);

    printf("Enter the distance to be travelled in km:\n ");
    scanf("%d",&distance);

    time_taken_in_hrs=distance/speed;

    float speed_in_minutes=speed/60;   //km/min
    int remaining_minutes=(distance%speed)/speed_in_minutes;

    printf("The time from A to B will take %d hours and %d minutes\n",time_taken_in_hrs,time_taken_in_mins);
    
    return 0;
}

