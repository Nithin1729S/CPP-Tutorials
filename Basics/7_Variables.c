//Taking input from user using scanf
#include<stdio.h>
int main()
{
    int grade1;
    int grade2;
    scanf("%d",&grade1);   //Reading from the console and the value is stored in the grade1 variable.The ampersand sign specifies that the value read from the console using these percentages should be placed at the  address where grades 1 resides.
    scanf("%d",&grade2);
    printf("Average = %d\n",(grade1+grade2)/2);
    
}


