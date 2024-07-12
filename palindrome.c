//  #include<stdio.h>

//  void merge(int a[], int m, int b[],int n,int r[])
//  {
//     int i=0,j=0,k=0;
//     while(i<m && j<n)
//     {
//         if(a[i]<b[j])
//         {
//             r[k]=a[i];
//             k++;
//             i++;
//         }
//         else{
//             r[k]=b[j];
//             k++;
//             j++;
//         }
//     }
//     while(i<m)
//     {
//         r[k]=a[i];
//         k++;
//         i++;
//     }
//     while(j<n)
//     {
//         r[k]=b[j];
//         k++;
//         j++;
//     }
//  }
//  int main()

//  {

//    int arr1[]={2,5,6,3,1};
//    int arr[]={4,7,8,9,10};
//    int final[10];
//    merge(arr1,5,arr,5,final);

//   for(int i=0;i<10;i++)
//   {
//     printf("%d\t",final[i]);
//   }

//     return 0;

//  }


// #include<stdio.h>
// int nonrepeat(int a[],int length)
// {
//       int i=0,j=0,count=0;
//       for(i=0;i<length;i++)
//       {
//         for(j=0;j<length;j++)
        
//             if(a[i]== a[j] && i!=j)
//             break;
//             if(j==length) count++;
 
//       }
//       return count;
// }
// int main()
// {
//     int arr[]={1,2,3,3,4,4,5,6,7,8,9,6};
   
//      printf("%d",nonrepeat(arr,12));
// }


// #include<stdio.h>
// void stro(char *st)
// {
//     int i=0;
//     while(st[i]!='\0')
//     {
//         i++;
//     }
//     printf("length of string is : %d", i);
// }
// int main()
// {
//     char str[] = "hello naruto uzumaki ";  // Declare str as a char array
//     stro(str);
   
//     return 0;
// }

 /* It is a code for reversing words in a string */



// The expression s[i-j-1] is used to reverse each word in the string s.

// Here's how it works:

// The outer for loop (for(i=0;i<len;i++)) iterates over each character in the string s.

// The inner for loop (for(j=0;j<len;j++,i++)) copies each word (sequence of characters separated by spaces or a period) from s to temp. The variable j keeps track of the length of the current word.

// After a word is copied to temp, the while loop (while(j>0)) reverses the word by copying characters from temp back to s in reverse order. The expression s[i-j-1] calculates the position in s where the reversed character should be placed.

// i is the position just after the end of the current word in s.
// j is the number of characters remaining to be copied back to s.
// So, i-j is the position in s where the next reversed character should be placed.
// Subtracting 1 from i-j gives the correct position because array indices in C start from 0.
// In summary, s[i-j-1] is used to place the characters of each word in reverse order back into the string s.
// #include<stdio.h>
// #include<string.h>
// void word(char *s)
// {
// int len=strlen(s);
//   int i= 0,j=0;
// char temp[100];
// for(i=0;i<len;i++)
// {
//     for(j=0;j<len;j++,i++)
//     {
//         if(s[i]==' ' || s[i]=='.')
//         {
//             break;
           

//         }
//          temp[j]=s[i];
//     }
//     while(j>0)
//     {
//         j--;
//         s[i-j-1]=temp[j];
//     }
// }

// }


// int main()
// {
//    char s[100];
//   fgets(s,100,stdin);
   
//    printf("%s\n",s);
//     word(s);
//     printf("%s\n",s);
//     return  0;

// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//   char str[]="hello naruto uzumaki luffy boruto uzumaki";
//   int count=1;
//   for(int i=0;i<strlen(str);i++)
// {
//     if(str[i]==' ' || str[i]=='.' || str[i]==',')
//     count++;
// }
// printf("number of words in string is : %d",count);
//     return 0;

// }


// #include<stdio.h>
// #include<string.h>
// int largest(char *s)
// {
//     int le=strlen(s);
//  int count=0;
//  int max=-1;
//  char nonwords[]=" .,\n\t;";
//  int i=0;
//  while(i<le)
//  {
//         while(i<le && strchr(nonwords,s[i])!=NULL)
//         {
//             i++;
//         }
//         if(i<le)
//         {
//             count=1;
//             while(i<le && strchr(nonwords,s[i])==NULL)
//             {
//                 count++;
//                 i++;
//             }
//             if(count>max)
//             {
//                 max=count;
//             }
//         }
//         printf("largest word is : %d",max);

//  }

// }
// int main()
// {

//     char s[]="my hero, luffy narutouzumaki";
//    largest(s);
//     return 0;

// }


// \*The variables j and k are used to index into the 2D array n2 which is used to store the words from the input string n.

// j is used to keep track of the current word (i.e., it's the index for the words).
// k is used to keep track of the current character within the current word (i.e., it's the index for the characters within a word).
// In the if block, when a space character is encountered, it signifies the end of a word. So, n2[j][k] = '\0'; is used to null-terminate the current word, j++ is used to move to the next word, and k is reset to 0 to start at the beginning of the new word.

// In the else block, when a non-space character is encountered, it's part of the current word. So, n2[j][k] = n[i]; is used to add the character to the current word, and k++ is used to move to the next character position within the current word.

// */

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     char n[100];
//     char n2[10][10];
//     int max, m = 0;
//     int i = 0, j = 0, k = 0;

//     fgets(n, 100, stdin);

//     for(i = 0; n[i] != '\0'; i++)
//     {
//         if(n[i] == ' ' || n[i] == '\n')
//         {
//             n2[j][k] = '\0';
//             j++;
//             k = 0;
//         }
//         else
//         {
//             n2[j][k] = n[i];
//             k++;
//         }
//     }

//     n2[j][k] = '\0';

//     max = strlen(n2[0]);

//     for(i = 0; i <= j; i++)
//     {
//         if(max < strlen(n2[i]))
//         {
//             max = strlen(n2[i]);
//             m = i;
//         }
//     }

//     printf("largest word is : %s", n2[m]);

//     return 0;
// }


// #include<stdio.h>
// #include<string.h>


// int smallest(char *s)
// {
//     int len = strlen(s);
//     if(len == 0)
//     {
//         return 0;  // Return 0 instead of NULL for an integer function
//     }

//     int count = 0;
//     int min = len;  // Initialize min to len instead of 999
//     int i = 0;
//     char nonwords[] = " .,\n\t;";

//     while(i < len)
//     {
//         count = 0;
//         while(i < len && strchr(nonwords, s[i]) == NULL)  // Move the != NULL outside the function call
//         {
//             i++;
//             count++;
//         }

//         if(count < min)
//         {
//             min = count;
//         }

//         i++;  // Increment i to skip the non-word character
//     }

//     return min;
// }

// int main()
// {
//     char s[] = "hello nato,uzumaki.";
//     printf("smallest word is : %d", smallest(s));
//     return 0;
// }


// Bubble sort(ascending order) and decending order.


// #include<stdio.h>
// #include<stdbool.h>
// void print_unique(int a[], int length)
// {
//    for(int i=0;i<length;i++)
//    {
//     bool match_found=false;
//     for(int j=0;j<length;j++)
//     {
//         if(a[i]==a[j] && i!=j)
//         {
//             match_found=true;
//         }
       
//     }
//      if(!match_found)
//         {
//             printf("%d\t",a[i]);
//         }
//    }

// }
// int main()
// { 
//     int arr[] ={1,2,2,3,3,5,6,7,4,8,9,8,7,6,5,4,77};
//     print_unique(arr,17);

    
//     return 0;
    
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[]="listen";
//     char arr[]="slent";
//     int i=0,j=0;
//     int count=0;
//     for(int i=0;i<strlen(str);i++)
//     {
//         for(int j=0;j<strlen(arr);j++)
//         {
//             if(str[i]==arr[j])
//             {
//                 count++;
               
//             }
        
//         }
       
//     }
//      if(count==strlen(str) && count==strlen(arr))
//         {
//             printf("strings are anagram");
//         }
//         else
//         {
//             printf("strings are not anagram");
//         }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// void first(char *s)
// {
//   int len=strlen(s);
//   bool common=false;
//   bool unique=true;
//   for(int i=0;i<len;i++)
//   {
//       common=false;
//       unique=true;
//       for(int j=0;j<len;j++)
//       {
//           if(s[i]==s[j] && i!=j)
//           {
//               common=true;
//               break;
//           }
//       }
//       if(!common)
//       {
//           printf("first non repeating character is : %c",s[i]);
//           unique=false;
//           break;
//       }
//   }

// }
// int main()
// {

// char s[]="abcdefghijabcdef";
// first(s);
// return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//    char str[]="hello my hero academia";
//     int len=strlen(str);
//     char m;
//     scanf("%c",&m);
//     int count=0;
//     for(int i=0;i<len;i++)
//     {
//           if(m==str[i])

//           {
//             count++;   
//           }
//     }
//    printf("%d",count);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// void reverse(char* str)
// {
//     int len = strlen(str);
//     for(int i = 0, j = len - 1; i < j; i++, j--)
//     {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//     }
// // }

// // int main()
// // {
// //     char str[] = "hello my hero academia";
// //     reverse(str);
// //     printf("%s", str);
// //     return 0;
// // }

// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// void min(char *s)
// {
//    int len=strlen(s);
//   char unique[len];
//   int count=0;
//   int mincount;
//   char minchar;
//   for(int i=0;i<len;i++)
//   {
//     bool counted=false;
//     for(int j=0;j<count;j++)
//     {
//       if(s[i]==unique[j])
//       {
//         counted=true;
//         break;
//       }
//     }
//     if(counted) continue;
//     int temp=0;
//     for(int j=0;j<len;j++)
//     {
//         if(s[i]==s[j])
//         {
//             temp++;
//         }
        
//     }
//     unique[count]=s[i];
//     count++;
//     if(temp<mincount || count==1)
//     {
//         mincount=temp;
//         minchar=s[i];
//     }


//   }
//   if(len>0)
//   {
//     printf("minimum character is : %c",minchar);
//   }
//   else{
//     printf("string is empty");
  
//   }

// }
// int main()
// {
//     char s[]="abcdefabcdabcaba";
//     min(s);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//    char s[]="abcdefabcdeabcd";
//    int length=strlen(s);
// int count=0;
// char maxcharecter;
// int max_count=0;
// for(int i=0;i<length;i++)
// {
//     for(int j=0;j<length;j++)
//     {
//         if(s[i]==s[j] && i!=j)
//         {
//             count++;
//         }
//     }
//     if(max_count<count)
//     {
//         max_count=count;
//         maxcharecter=s[i];

//     }
// }
//     printf("charecter that is reoeated maximum times is %c:",maxcharecter);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100];
//     char remove;
//     fgets(str,100,stdin);
//     scanf("%c",&remove);
//     int len=strlen(str);
//     for(int i=0;i<len;i++)
//     {
//         if(str[i]==remove)
//         {
//          for(int j=i;j<len;j++)
//          {
//              str[j]=str[j+1];
//          }
//         }
//     }
//     printf("%s",str);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// #include<stdbool.h>
// void remove(char *s,int pos)
// {
//     int length=strlen(s);
//     if(pos>=length){
//          printf("invalid");
//     }
//     for(int i=pos;i<length;i++)
//     {
//         s[i]=s[i+1];
//     }
//     printf("%s",s);
 
// }
// int main()
// {
//     char s[]="hello buddy";
//    int n;
//    scanf("%d",&n);
//    remove(s,n);
//     return 0;
// }

// #include<stdio.h>


// int second(int a[],int length)
// {

//     int max1,max2;
//     if(a[0]>a[1])
//     {
//         max1=a[0];
//         max2=a[1];
//     }
//     else{
//         max1=a[1];
//         max2=a[0];
//     }
//     for(int i=2;i<length;i++)
//     {
//         if(a[i]>max1)
//         {
//             max2=max1;
//             max1=a[i];
//         }
//         else if(a[i]>max2)
//         {
//             max2=a[i];

//     }
//     return max2;
//     }    
// }


// int main()
// {
//     // Your code here
    
//     int a[]={11,2,33,44,55,6};
//     printf("%d",second(a,6));

  
//     return 0;

// }

// #include<stdio.h>
// int main()
// {
//     int arr[3][3];
//     int arr2[3][3];
//     int arr3[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             arr3[i][j]=arr[i][j]+arr2[i][j];
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d\t",arr3[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// int main()

// {
//     int arr[3][3];
//     int arr2[3][3];
//     int arr3[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&arr2[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             arr3[i][j]=arr[i][j]*arr2[i][j];
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d\t",arr3[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main()
// {

//     int arr[3][3];
//     int arr2[3][3];
    
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d",&arr[i][j]);
//         }

//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             arr2[j][i]=arr[i][j];
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d\t",arr2[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a,sum=0,cube,rem;
//     scanf("%d",&a);
//     int temp=a;
//     while(a>0)
//     {
//     rem=a%10;
//     cube=rem*rem*rem;
//     sum=sum+cube;
//     a=a/10;
//     }
//     a=temp;
//     if(a== sum)
//     {
//         printf("armstrong nuber");
//     }
    
//     else
//     printf("not a armstrong number");
//     return 0;
   

// }
// #include<stdio.h>
// int reverse(int k)
// {
//     int rem,rev=0;
//     while(k>0)
//     {
//         rem=k%10;
//         rev=rev*10+rem;
//         k=k/10;
//     }
//     return rev;

// }
// int main()
// {

//  int a;
//  scanf("%d",&a);
// printf("%d",reverse(a));
//     return 0;
// }

// #include<stdio.h>
// void swap(int arr[2][2],int m,int k)
// {
//     int temp=0;
//     for(int i=0;i<2;i++)
//     {
//         temp=arr[m][i];
//         arr[m][i]=arr[k][i];
//         arr[k][i]=temp;
//     }

// }
// int main()
// {
//        int arr[2][2]={{1,2},{3,4}};
//     swap(arr,0,1);
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }


#include<stdio.h>
int main()
{
   
    


    return 0;
}