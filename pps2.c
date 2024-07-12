// #include<stdio.h>

// struct employee {
//    int no;
//    char name[10];
//    int salary;
// };

// int main()
// {int highest_salary=0;

//     int n;
//     printf("Enter how many employees: ");
//     scanf("%d", &n);

//     struct employee e[n];

//     for(int i = 0; i < n; i++)
//     {
//         printf("Enter the details of employee %d\n", i+1);
//         printf("Employee number: ");
//         scanf("%d", &e[i].no);
//         printf("Employee name: ");
//         scanf("%s", e[i].name);
//         printf("Employee salary: ");
//         scanf("%d", &e[i].salary);
//     }

   
//     for (int i=0;i<n;i++){
//     if(e[i].salary>highest_salary)
// { highest_salary=e[i].salary;
//     printf("Employee number: %d\n", e[i].no);
//         printf("Employee name: %s\n", e[i].name);
//         printf("Employee salary: %d\n", e[i].salary);

// }
//     }
//     return 0;
// }


#include <stdio.h>

struct student{
   int roll_no;
    char name[10];
    char course[10];

};
void display(int a,char b[],char c[])
{   
    
    printf("Student detail\n");
    printf("Roll no: %d\n",a);
    printf("Name: %s\n",b);
    printf("Course: %s\n",c);
}
int main()
{
    struct student s;
    printf("Enter the details of student\n");
    scanf("%d",&s.roll_no);
    scanf("%s",s.name);
    scanf("%s",s.course); 
     display(s.roll_no,s.name,s.course);
    return 0;
}


