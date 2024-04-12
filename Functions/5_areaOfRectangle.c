#include<stdio.h>
#include<stdlib.h>

int findArea(int height,int width)
{
    return height*width;
}

int main()
{   
    int h,w;
    printf("Enter the height and width of the rectangle:\n");
    scanf("%d%d",&h,&w);
    printf("Area : %d",findArea(h,w));
    return 0;

}

