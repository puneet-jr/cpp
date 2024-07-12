// // #include<stdio.h>
// // void rotate_left(int array[], int length)
// // {
// //     int temp=array[0];
// //     for(int i=0;i<length-1;i++)
// //     {
// //         array[i]=array[i+1];
        
// //     }
// //     array[length-1]=temp;
    
// // }
// // void rotate(int array[],int length,int n)
// // {
// //     for(int i=0;i<n;i++)
// //     {
// //         rotate_left(array,length);
// //     }
// // }
// // int main(){

// //    int arr[]={1,2,3,4,5,6};
  
// //     for(int i=0;i<6;i++)
// //    {
// //          printf("%d",arr[i]);
// //    }
// //    printf("\n");
// //   int a;
// //   scanf("%d",&a);
// //    rotate(arr,6,a);
// //    for(int i=0;i<6;i++)
// //    {
// //          printf("%d",arr[i]);
// //    }
// //     return 0;
// // }
// #include<stdio.h>

// void right(int array[],int length)
// {
//     int temp=array[length-1];
//     for(int i=length-2;i>=0;i--)
//     {
//         array[i+1]=array[i];
        
//     }
//     array[0]=temp;

// }
// void rightof(int array[], int length, int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         right(array,length);
//     }
// }
// int main()
// {
//   int srr[]={1,2,3,4,6};
//     for(int i=0;i<5;i++)
//     {
//         printf("%d",srr[i]);
//     }
//     int a;
//     scanf("%d",&a);
//     printf("\n");
//     rightof(srr,5,a);
//     for(int i=0;i<5;i++)
//     {
//         printf("%d",srr[i]);
//     }

//     return 0;

// }