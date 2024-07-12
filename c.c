// // // //
// // // // Hacker rank question 2
// // // //  #include <stdio.h>
// // // // #include <string.h>


// // // // void main() 
// // // // {
// // // //     char ch,s,sen;
// // // //     ch='C';
// // // //     s[]= "Language";
// // // //     sen[]="Welcome To C!!"
// // // //     printf("%c\n",ch);
// // // //     printf("%s\n",s[]);
// // // //     printf("%s\n",sen[]);
   
// // // // }
// // // //*****Note book example 3 else if
// //  ''' Area in c++'''
// // // //  #include <iostream> 
// // // // using namespace std; 
// // // // #include<math.h> 
// // // // #define pi 3.14
// // // // int main() 
// // // // { 
// // // //     char gen;
// // // //     float sal,bonus,tsal;
// // // //     cin>>gen>>sal;
// // // //     if(gen="m" || gen="M")
// // // //         bonus=sal*0.3;
// // // //     tsal=bonus+sal;
// // // //     else if(gen="f" || gen="F")
// // // //         bonus=sal*0.5;
// // // //         tsal=sal+bonus;
// // // //     else
// // // //         cout<<"invalid gender";
// // // //     cout<<"bonus\t"<<bonus;
// // // //     cout<<"\ntsal\t"<<tsal;
    
    
// // // //     return 0; 
// // '''Fibanocii in c++'''
// // // #include<iostream>
// // // #include<string.h>
// // // using namespace std;
// // // int main()
// // // {
// // // int a=0,b=1,nextnum=0,n;
// // // cin>>n;
// // // while(nextnum<=n)
// // // {cout<<nextnum<<" "; 
// // //  a=b;
// // //  b=nextnum;
// // //  nextnum=a+b;
// // // ;

// // // }
//  "doubt of swap function ,call by address, why void swapByReference and down swapByReference is used"
// // // #include<iostream>
// // // using namespace std;


// // //   void swap(int &x , int &y)
// // //   {
// // //   int t=x;
// // //     x=y;
// // //     y=t;
// // //   }
// // // int main()
// // // {
// // //     int a,b;
// // //     cout<<"enter a and b";
// // //     cin>>a>>b;
// // //     void swap(a,b);
// // //     cout<<"after swapping :"<<a<<b<<endl;
// // // }

// // #include<iostream>
// // using namespace std;

// // void swapByReference(int &x , int &y)
// //   {
// //   int t=x;
// //     x=y;
// //     y=t;
// //   }
// // int main()
// // {
// //     int a,b;
// //     cout<<"enter a and b";
// //     cin>>a>>b;
// //     swapByReference(a,b);
// //     cout<<"after swapping :"<<a<<" "<<b<<endl;
// // }
// "google solution "

// // #include <iostream>
// // using namespace std;
 
// // void swapByReference(int &m, int &n){
// //     int temp= m;
// //     m=n;
// //     n=temp;
// // }
 
// // int main()
// // {
// //     int a,b;
    
// //     cout << "Enter two numbers A & B"<< endl;
// //     cin >> a;
// //     cin >> b;
    
// //     cout << "Value of A before swapping: " << a <<endl;
// //     cout << "Value of B before swapping: " << b <<endl;
    
// //     swapByReference(a,b);
    
// //     cout << "Value of A after swapping: " << a <<endl;
// //     cout << "Value of B after swapping: " << b <<endl;
// // }
// "transpose of a matrix doubt code"
// // #include<iostream>
// // using namespace std;
// // int a[10][10],i,j,r,c;
// // cin>>r>>c;
// // for(i=0;i<r;i++)
// // {
// //     for(j=0;j<c;j++)
// //         cin>>a[i][j];
// //         for(i=0;i<r;i++)
// //         {
// //             for(j=0;j<c<j++)
// //             cout<<a[i][j]<<" ";
// //             cout<<endl;
            
// //         }
// //         for(i=0;i<c;i++)
// //         {
// //             for(j=0;j<r;j++)
            
// //                 cout<<a[i][j]<<" "
// //                 cout<<endl;
                
            
// //         }
    
// }