#include<stdio.h>
#include<stdlib.h>


int sumArray(int *ptr, int size)
{
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=ptr[i];
    }
    return sum;
}
int main()
{
    int grades[3]={10,40,56};
    int arraySize=3;
    int result;
    result=sumArray(grades,arraySize);
    printf("Sum of elements of array is %d",result);
    return 0;


}