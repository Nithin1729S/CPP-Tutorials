#include<stdio.h>
#include<stdlib.h>

int main()
{
    int grades[5];
    int lowestGrade;

    for(int i=0;i<5;i++)
    {
        printf("Enter grade no.%d:\n",i+1);
        scanf("%d",&grades[i]);
    }

    printf("Your grades are :");
    for(int i=0;i<5;i++){
        printf("%d\t",grades[i]);
    }

    lowestGrade=grades[0];

    for(int i=1;i<5;i++)
    {
        if (grades[i]<lowestGrade)
        {
            lowestGrade=grades[i];
        }
    }

    printf("Your lowest grade is %d",lowestGrade);
    return 0;
}