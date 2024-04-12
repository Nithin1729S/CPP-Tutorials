#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int day,month,year;
    int leap_year=0;

    printf("Enter the day:\n");
    scanf("%d",&day);
    printf("Enter the month:\n");
    scanf("%d",&month);
    printf("Enter the year:\n");
    scanf("%d",&year);

    if (month==2)
    if (year%4==0 && (year%100!=0 || year%400==0))  //Remember this
    leap_year=1;

    day+=1;

    switch(month)
    {//Leaving a case empty does not go to default but   goes to the next case.
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day<=31)
            break;//gets you out of  case only not the whole switch,Executing default is mandatory.
        case 4:
        case 6:
        case 9:
        case 11:
            if (day<=30)
            break;
        case 2:
            if (day<=29 && leap_year==1)
            break;
            else if(day<=28)
            break;
        default://The default statement is executed if no case constant-expression value is equal to the value of expression 
            day=1;
            month+=1;
            if (month>12)    
            {
                month=1;
                year+=1;
            }
        
    }
    
    printf("The nest awesome day is: %d/ %d/ %d\n",day,month,year);





    return 0;


}    