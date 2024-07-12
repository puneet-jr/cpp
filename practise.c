// // #include <stdio.h>
// // int main() {
// //     int n, flag=1;
// //     scanf("%d", &n);
// //     if (n!=1) {
// //         for (int i=2; i<n; i++) {
// //             if (n%i == 0) {
// //                 flag = 0;
// //                 break;
// //             }
// //         }
// //     }
// //     else {
// //         flag = 0;
// //     }
// //     if (flag) {
// //         printf("Prime\n");
// //     } else {
// //         printf("Not Prime\n");
// //     }
// // }
// // #include<stdio.h>
// // struct student{
// //    int roll;
// //    char name[50];
// // };

// // void hello(struct student s1)
// // {
// //     printf("Roll number is %d\n",s1.roll);
// //     printf("Name is %s\n",s1.name);
// // }
// // int main()
// // {
// //     struct student s1;
// //     scanf("%d\n",&s1.roll);
// //     fgets(s1.name,50,stdin);
// //     printf("Roll number is %d\n",s1.roll);
   
// //     printf("Name is %s\n",s1.name);

// //     struct student *ptr=&s1;
// //     s1.roll=34;
// //    printf("Roll number is %d\n",ptr->roll);  /*\\ptr->roll is equivalent to (*ptr).roll*/
// //     printf("Name is %s\n",ptr->name);
   
// //     hello(s1);
    

// //     return 0;

// // }


// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
// //    int *ptr;
// //     ptr=(int*)calloc(5,sizeof(int));
// //    for(int i=0;i<5;i++)
// //     {
        
// //          scanf("%d",&ptr[i]);
// //     }
// //     for(int i=0;i<5;i++)
// //     {
// //         printf("%d\t",ptr[i]);
// //     }
// //    free(ptr);

// //    ptr=(int *)malloc(5*sizeof(int));
// //     for(int i=0;i<5;i++)
// //     {
// //         scanf("%d",&ptr[i]);
// //     }
// //     free(ptr);
// //     for(int i=0;i<5;i++)
// //     {
// //         printf("%d\t",ptr[i]);
// //     }
// int a;



//     return 0;
// }
#include<stdio.h>
void student(int k,int m)
{
 int c=k+m;
    printf("%d",c);
}

 

int main()
{  int a;
   int c;
   scanf("%d",&a);
    scanf("%d",&c);
    student(a,c);
    return 0;
}