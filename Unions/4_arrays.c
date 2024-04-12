#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef union Student
{
    int ID;
    double GPA;
}student;

int main()
{
    student studentsArray[5];  //array of unions
    
    for(int i=0;i<3;i++)
    {
        printf("Enter ID #%d",i+1);
        scanf("%d",&studentsArray[i].ID);
    }

    for(int i=0;i<3;i++)
    {
        printf("Student #%d ID = %d\n",i+1,studentsArray[i].ID);
        scanf("%d",&studentsArray[i].ID);
    }

    return 0;
}

