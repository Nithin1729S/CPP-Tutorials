#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int num1,num2;
    FILE *fp;
    fp=fopen("exercise2.txt","r");

    if (fp!=NULL)
    {
        for(int i=0;i<10;i++)
        {
            fscanf(fp,"%d    %d",&num1,&num2);
            printf("%d %d\n",num1,num2);
        }
        fclose(fp);
    }

    return 0;
}