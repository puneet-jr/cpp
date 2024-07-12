// // #include<stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);
// //     int arr[n];
// //     for(int i=0;i<n;i++)
// //     {
// //         scanf("%d",&arr[i]);
// //     }
// //     for(int i=0;i<n/2;i++)
// //     {
// //         int firstval=arr[i];
// //         int secondval=arr[n-i-1];
// //         arr[i]=secondval;
// //         arr[n-i-1]=firstval;
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //         printf("%d\t",arr[i]);
// //     }
// //     return 0;
// // }
#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<n/2;i++)
{
   temp=arr[i];
   arr[i]=arr[n-i-1];
   arr[n-i-1]=temp;
}
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}    
return 0;
}
// #include<stdio.h>
// int main(){
//    int a,temp;
//    scanf("%d",&a);
//    int arr[a];
//    for(int i=0;i<a;i++)
//    {
//     scanf("%d",&arr[i]);
//    }
//    for(int i=0;i<a/2;i++)
   
//    {
//     temp=arr[i];
//     arr[i]=arr[a-i-1];
//     arr[a-i-1]=temp;

//    }
//    for(int i=0;i<a;i++)
   
//    {
//     printf("%d\t",arr[i]);
//    }


//     return 0;
// }