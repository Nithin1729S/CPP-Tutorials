#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int num=1;
    int result;

    FILE *fp;
    fp=fopen("exercise2.txt","w");

    if (fp!=NULL)
    {
        while(num<=10)
        {
            result=pow(num,2);
            fprintf(fp,"%d %d\n",num,result);
            num++;
        }
        fclose(fp);
    }

    return 0;
}