#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int seconds,minutes,hrs,remaining_seconds;
    printf("Enter the seconds:\n");
    scanf("%d",&seconds);
    hrs=seconds/3600;
    minutes=(seconds-hrs*3600)/60;
    remaining_seconds=seconds-(hrs*3600)-(minutes*60);

    //We need time in HH:MM:SS format
    if (hrs<10)
      printf("0");
    //if hrs not less than 10 we just print that number.
    printf("%d : ",hrs);
    
    if (minutes<10)
      printf("0");
    printf("%d : ",minutes);

    if (remaining_seconds<10)
      printf("0");
    printf("%d\n",remaining_seconds);


    return 0;


}