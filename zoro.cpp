// // /*reate an abstract class Shape with a pure virtual function area().
// // Derive two classes Circle and Rectangle from Shape. Implement the area() function in both derived classes.
// // Create a ShapeArray class that can store multiple Shape objects. This class should have an overloaded + operator that can add a Shape object to the ShapeArray.
// // The ShapeArray class should also have a function calculateTotalArea that calculates and returns the total area of all Shape objects in the array using dynamic polymorphism.
// // Finally, overload the << operator in the ShapeArray class to print all the Shape objects in the array.*/
// // #include<iostream>
// // using namespace std;
// // class Shape{
// //     public:
// //    virtual void area() =0;
   
   
// // };
// // class Circle : public Shape
// // {
// //   public:
// //   int a;
// //   void print()
// //   {
// //     cin>>a;

// //   }
// //   void area()
// //   {
// //     float area;
// //     area=3.14*a*a;
// //     cout<<"area"<<area<<endl;
// //   }

// // };
// // class Rectangle: public Shape{
// // public:
// // int len;
// // int bred;
// // void print(){
// //     cin>>len>>bred;
// // }
// // void area()
// // {int area;
// // area=len*bred;
// //     cout<<"area of rectangle"<<area<<endl;
// // }
// // };
// // class ShapeArray{
// //     Shape** arr= new Shape*[4];
    
  
// // };

// // int main()
// // {
// //     ShapeArray sa;
    
    

// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// class Test {
// private:
//     int num1, num2, num3;
// public:
//     Test(int num1 = 0, int num2 = 0, int num3 = 0) : num1(num1), num2(num2), num3(num3) {}

//     Test& operator++() {
//         ++num1;
//         ++num2;
//         ++num3;
//         return *this;
//     }

//     Test& operator++(int) {
//         Test temp(*this);
//         ++num1;
//         ++num2;
//         ++num3;
//         return temp;
//     }

//     void print() {
//         if(num1 == 0 && num2 == 0 && num3 == 0) {
//             cout << "All Zeros" << endl;
//         } else {
//             cout << num1 << " " << num2 << " " << num3 << endl;
//         }
//     }
// };

// int main() {
//     int a,b,c;
//     cin>>a>>b>>c;
//     Test t1(a,b,c);
//     t1.print();
    
//     t1++;  
//     t1.print();

//  return 0;
// 


#include<iostream>
using namespace std;
int main()
{

    return 0;

}
