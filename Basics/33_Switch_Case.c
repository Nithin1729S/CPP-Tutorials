#include<stdio.h>
#include<stdlib.h>
int main()
{
    char grade;
    printf("Enter your grade (A-F):\n");
    scanf("%c",&grade);
    switch(grade)//grade can be int or char.....other data types are not allowed
    {
        case 'A':
        printf("Grade is between 90 - 100\n");
        break;

        case 'B':
        printf("Grade is between 80 - 89\n");
        break;//This is added in the end of every case.It says that if the control has executed one case then there is no need to search and execute another case.
        //Break will avoid default statement .

        case 'C':
        printf("Grade is between 70 - 79\n");
        break;
        //if you dont add break statement then the control will still be searching for other valid cases that can be executed after it has executed one

        case 'D':
        printf("Grade is between 60 - 69\n");
        break;

        default:   //a optional line
        printf("ERROR..TRY AGAIN! \n");
        break;


    }
}

//if no  break statements are added then if one cases is excuted then all the cases following it will also get executed including default.