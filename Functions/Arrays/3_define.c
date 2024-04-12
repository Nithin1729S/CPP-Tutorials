#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main()
{
    long long phonenum;
    int dig,i=9;
    int phonenumbr[SIZE]={0};

    printf("Enter you Phone number\n");
    scanf("%lld",&phonenum);
    
    while(phonenum!=0){
        dig=phonenum%10;
        phonenum/=10;
        phonenumbr[i]=dig;
        i--;
    }
    
    int max=phonenumbr[0];
    int idx=0;
    for(int i=0;i<SIZE;i++){
        if(phonenumbr[i]>max)
        {
            max=phonenumbr[i];
            idx=i;
        }
    }
    printf("The largest number of your phonenumber is : %d\n",max);
    printf("The index of the largest number is : %d",idx);
    return 0;
}
