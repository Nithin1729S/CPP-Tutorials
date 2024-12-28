#include<stdio.h>


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1]) swap(&arr[j],&arr[j+1]);
            flag=1;
        }
        if(flag==0) break;
    }
}

void selectionSort(int arr[],int n)
{
    int i,j,k;
    for(int i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k]) k=j;
        }
        swap(&arr[i],&arr[k]);
    }
}


void binarySearch(int arr[],int n,int key)
{
    int l=0;
    int h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==key) 
        {
            printf("Element %d found at index %d.",key,mid);
            return ;
        }
        if(key<arr[mid]) h=mid-1;
        else l=mid+1;
    }
    printf("Element not found.");

}


int* reverse(int arr[],int n)
{
    int i;
    int j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
        swap(&arr[i],&arr[j]);
    }
    return arr;
}

int main()
{
    int arr[]={6,3,8,1,4,0,8,41,63};
    int n=sizeof(arr)/sizeof(int);
    int *A=reverse(arr,n);
    for(int i=0;i<n;i++) printf("%d ",A[i]);
    return 0;
}
