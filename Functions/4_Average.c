#include<stdio.h>
#include<stdlib.h>

float findAverage(int grade1,int grade2,int grade3){
    float avg;
    avg=(grade1+grade2+grade3)/3.0;
    return avg;

}

int main()
{
    int g1,g2,g3;
    printf("Enter three grades:\n");
    scanf("%d%d%d",&g1,&g2,&g3);

    printf("Average = %f\n",findAverage(g1,g2,g3));
    

}