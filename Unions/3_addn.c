#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union Student_union
{
    int ID;
    double GPA;
};

struct Student_struct
{
    int ID;
    double GPA;
};

int main()
{
    union Student_union student1;
    printf("The size of student1 union = %llu\n",sizeof(student1));

    struct Student_struct student2;
    printf("The size of student2 struct = %llu\n",sizeof(student2));

    union Student_union *ptrStudent1;
    printf("The size of student3 union ptr = %llu\n",sizeof(ptrStudent1));

    student1.ID=5;
    printf("student1.ID = %d\n",student1.ID);
    ptrStudent1=&student1; //ptrStudent3 points to Student1 var

    ptrStudent1->ID=10;
    printf("Student1.ID = %d\n",student1.ID);

    

    return 0;
}