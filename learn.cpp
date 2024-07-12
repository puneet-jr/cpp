// // // #include<iostream>
// // // #include<string>
// // // using namespace std;
// // // class A{
// // //     public:
// // //     string s;
// // //     A(string s){
// // //         this->s = s;
// // //     }
// // //    A()
// // //    {
// // //     cin>>s;
// // //    }
// // //    int si(string a)
// // //    {
// // //      int sum=0;
// // //      for(int i=0;i<a.length();i++)
// // //      {
// // //         sum +=a[i];
// // //      }
// // //         return sum;
// // //    }
// // //    int operator >(A &a)
// // //    {
     
// // //            return si(s)>si(a.s);
// // //    }
// // //    int operator< (A &a)
// // //    {
// // //        return si(s)<si(a.s);
// // //    }
// // //     int operator== (A &a)
// // //     {
// // //          return si(s)==si(a.s);
// // //     }



// // // };
// // // int main()

// // // {
// // //     A s1,s2;
// // //     if(s1>s2)
// // //     {
// // //         cout<<"string s2 is smaller"<<endl;

// // //     }
// // //     else if(s1<s2)
// // //     {
// // //         cout<<"string s1 is smaller"<<endl;
// // //     }
// // //     else
// // //     {
// // //         cout<<"both strings are equal"<<endl;
// // //     }

// // //     return 0;
// // // }

// // #include<iostream>
// // using namespace std;

// // class matrix{
// //     int **data;
// //     int row,col;
    
// //     public:
// //     matrix(int r,int c)
// //     {
// //         row = r;
// //         col = c;
// //         data = new int*[row];
// //         for(int i=0;i<row;i++)
// //         {
// //             data[i] = new int[col];
// //         }
    
// //     }
// //     void read()
// //     {
// //         for(int i=0;i<row;i++)
// //         {
// //             for(int j=0;j<col;j++)
// //             {
// //                 cin>>data[i][j];
// //             }
// //         }
// //     }
// //     void display()
// //     {
// //         for(int i=0;i<row;i++)
// //         {
// //             for(int j=0;j<col;j++)
// //             {
// //                 cout<<data[i][j]<<" ";
// //             }
// //             cout<<endl;
// //         }
// //     }
// //     matrix operator +(matrix &m)
// //     {
// //         matrix temp(row,col);
// //         for(int i=0;i<row;i++)
// //         {
// //             for(int j=0;j<col;j++)
// //             {
// //                 temp.data[i][j] = data[i][j] + m.data[i][j];
// //             }
// //         }
// //         return temp;
// //     }
// //     matrix operator -(matrix &m)
// //     {
// //         matrix temp(row,col);
// //         for(int i=0;i<row;i++)
// //         {
// //             for(int j=0;j<col;j++)
// //             {
// //                 temp.data[i][j] = data[i][j] - m.data[i][j];
// //             }
// //         }
// //         return temp;
// //     }

// // };
// // int main()
// // {
// //     int row,col;
// //     cout<<"Enter the number of rows and columns of matrix"<<endl;
// //     cin>>row>>col;
// //     matrix m1(row,col),m2(row,col);
// //     cout<<"Enter the elements of first matrix"<<endl;
// //     m1.read();
// //     cout<<"Enter the elements of second matrix"<<endl;
// //     m2.read();

// //     matrix m3 = m1+m2;
// //     cout<<"Addition of two matrices is"<<endl;
// //     m3.display();

// //     matrix m4 = m1-m2;
// //     cout<<"Subtraction of two matrices is"<<endl;
// //     m4.display();



// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// class odd{
//   int number;
//   public:
//   odd(int n)
//   {
//         number = n;
//   }
//  odd& operator++()
//  {
//         number = number+2;
//         return *this;
//  }
//     void display()
//     {
//         cout<<"The number is "<<number<<endl;
//     }
//     odd& operator--()
//     {
//         number = number-2;
//         return *this;
//     }


// };
// int main()
// {
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     odd o(n);
//     string operation;
//     cout<<"Enter the operation"<<endl;
//     cin>>operation;
//     if(operation =="++")
//     {
//         ++o;
//     }

//     else
//     {
//         --o;
//     }
//     o.display();
   
//     return 0;

// }

// #include<iostream>
// using namespace std;

// int main()

// {

 
//     return 0;

// }