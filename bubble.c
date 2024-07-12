// #include<stdio.h>
// int main()
// {
//     int a[]={23,646,453,5,5454,66,46,46,46,78};
//     int length=11;
//     for(int i=0;i<length;i++)
//     {
//         for(int j=0;j<(length-1);j++)
//         {
//             if(a[j]<a[j+1])
//             {
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<length;i++)
//     {
//         printf("a[%d]=%d\n",i,a[i]);
//     }
//     return 0;

// }
#include<stdio.h>
int main()
{
    int a[5];
    int b[5];
    int i=0;
    while( i<5){
    for( i=0;i<5;i++)
    {
       int n=5;
        scanf("%d",&a[i]);
        b[n]=a[i];
       n--;

    }
    }
    for (int n=5;n>0;n--)
    {
    printf("%d\t",b[n]);
    }
    return 0;
}