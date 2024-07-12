#include<stdio.h>
int main()
{ int n;
scanf("%d",&n);
int number=0;
    int arr[]={2,2,3,4,5,6,565,56,666,5,4,3,4,2,4,44,33,5,3};
    for(int i=0;i<20;i++)
    {
        if(n=arr[i])
        {
            number =number+1;
        }
    }
    printf("number of occurences of a number is  %d",number);
    return 0;
}