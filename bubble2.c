#include<stdio.h>
int main()
{
    int arr[]={3,8,6,4,4,9};
    int size=6;
    for(int i=0;i<size-1;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
               int temp=arr[j];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;

}