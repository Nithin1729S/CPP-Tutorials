#include<stdlib.h>
#include<stdio.h>
int main()
{
    int grade;
    int totalSum=0,gradesCount=0;


    while(grade!=-1){
        totalSum+=grade;
        gradesCount++;
        pritf("Please enter your grades or '-1' to stop");
        scanf("%d",&grade);

    }

    printf("You have entered %d grades! \n",gradesCount);
    printf("And your average grades %lf \n",(float)totalSum/gradesCount);
    return 0;
}

