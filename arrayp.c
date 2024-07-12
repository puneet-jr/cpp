// // #include<stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d",&n);
// //     int fib[n];
// //      fib[0]=0;
// //      fib[1]=1;
// //     printf("%d\t%d",fib[0],fib[1]);
// //     for(int i=2;i<n;i++)
// //     {
// //         fib[i]=fib[i-1]+fib[i-2];
// //         printf("\t%d\t",fib[i]);
// //     }
// //     return 0;
#include<stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    
    int fib=0;
    int fib1=1;
  for(int i=0;i<n;i++)
    {  printf("%d\t",fib);
        int total=fib+fib1;
        fib=fib1;
        fib1=total;
    }
    
    return 0;
}