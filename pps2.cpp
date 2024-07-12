// // #include<iostream>
// // using namespace std;
// // class rectangle{
// //     public:
// //      int length;
// //      int bredth;
// //      void setlength(int l){
// //         length=l;

// //      }
// //      void setbredth(int b){
// //         bredth=b;
// //      }
// //      void getarea(){
// //         cout<<"Area of rectangle is: "<<length*bredth<<endl;
// //      }
// // };
// // int main()
// // {
// //     rectangle r;
// //     int n,m;
// //     cin>>n;
// //     r.setlength(n);
// //     cin>>m;
// //     r.setbredth(m);
// //     r.getarea();
// //     return 0;
// // }
// // // #include<iostream>
// // // using namespace std;
// // // class number{
// // //     public:
    
// // //     number(){
// // //         int n;
// // //         cin>>n;
// // //     if(n>0 ){
// // //     if(n%2==0){
// // //         cout<<"Even"<<endl;
// // //     }
// // //     else{
// // //         cout<<"Odd"<<endl;
// // //     }
// // //     }
// // //     else{
// // //         cout<<"Invalid"<<endl;
    
// // //     }
// // // }
// // // };
// // // int main()
// // // {
// // //     number n;
// // //     return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;
// // // int main() {
// // // string input;
// // // cin>>input;
// // // for (char c : input) {
// // // if (c == '.') {
// // // cout << "Invalid" << endl;
// // // return 0;
// // // }
// // // }
// // // int num = stoi(input);
// // // if (num<0) {
// // // cout<<"Invalid"<<endl;
// // // return 0;
// // // }
// // // if (num%2==0) cout<<"Even"<<endl;
// // // else cout<<"Odd"<<endl;
// // // return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;
// // // int main() {
// // // int a,b;
// // // cin>>a>>b;
// // // cout<< (a*a) + (b*b)<<endl;
// // // return 0;
// // // }
// // // #include<iostream>
// // // using namespace std;
// // // class rectangle{
// // //      int length;
// // //      int bredth;
// // //     public:
// // //         void setlength(int l){
// // //             length=l;
    
// // //         }
// // //         void setbredth(int b){
// // //             bredth=b;
            
// // //         }
// // //         void getarea(){
// // //             cout<<"Area of rectangle is: "<<length*bredth<<endl;
// // //         }
// // //         void getperimeter(){
// // //             cout<<"Perimeter of rectangle is: "<<2*(length+bredth)<<endl;
// // //         }
// // // };
// // // int main()
// // // {
// // //     rectangle r;
// // //     int n,m;
// // //     cin>>n;
// // //     r.setlength(n);
// // //     cin>>m;
// // //     r.setbredth(m);
// // //     r.getarea();
// // //     r.getperimeter();
// // //     return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;
// // // class Car {
// // // public:
// // // string make, model;
// // // int year;
// // // Car(string make, string model, int year) {
// // // this->make = make;
// // // this->model = model;
// // // this->year = year;
// // // }
// // // void dispCar() {
// // // cout<<"Make: "<<make<<endl;
// // // cout<<"Model: "<<model<<endl;
// // // cout<<"Year: "<<year<<endl;
// // // cout<<"-------------------"<<endl;
// // // }
// // // };
// // // int main() {
// // // Car c1("Toyota", "Camry", 2022);
// // // Car c2("Honda", "Verna", 2021);
// // // c1.dispCar();
// // // c2.dispCar();
// // // return 0;
// // // }
// // // #include <iostream>
// // // #include <string>
// // // using namespace std;
// // // class Student {
// // // public:
// // // int id;
// // // string name;
// // // void putstu() {
// // // cout << "Enter student ID: ";
// // // cin >> id;
// // // cout << "Enter student name: ";
// // // cin >> name;
// // // }
// // // void getstu() {
// // // cout << "Student ID: " << id << endl;
// // // cout << "Student Name: " << name << endl;
// // // }
// // // };
// // // class Marks : public Student {
// // // public:
// // // int m1, m2, m3;
// // // void putmarks() {
// // // cout << "Enter marks for subject 1: ";
// // // cin >> m1;
// // // cout << "Enter marks for subject 2: ";
// // // cin >> m2;
// // // cout << "Enter marks for subject 3: ";
// // // cin >> m3;
// // // }
// // // void getmarks() {
// // //     cout << "Marks for subject 1: " << m1 << endl;
// // // cout << "Marks for subject 2: " << m2 << endl;
// // // cout << "Marks for subject 3: " << m3 << endl;
// // // }
// // // };
// // // class Result : public Marks {
// // // public:
// // // int total, avg;
// // // void show() {
// // // total = m1+m2+m3;
// // // avg = total/3;
// // // cout<<"The Total is: "<<total<<endl;
// // // cout<<"The Average is: "<<avg<<endl;
// // // }
// // // };
// // // int main() {
// // // Result s1;
// // // s1.putstu();
// // // s1.putmarks();
// // // s1.getstu();
// // // s1.getmarks();
// // // s1.show();
// // // return 0;
// // // }
// // // #include <iostream>
// // // #include <string>
// // // using namespace std;

// // // class Courier {
// // // protected:
// // //     string CourierID;
// // //     string Name_of_Courier;

// // // public:
// // //     Courier(string courier_id, string name_of_courier) : CourierID(courier_id), Name_of_Courier(name_of_courier) {}

// // //     void PrintBill(double base_fare) {
// // //         double shipping_cost = base_fare + 30;
// // //         cout << "CourierID: " << CourierID << endl;
// // //         cout << "Name_of_Courier: " << Name_of_Courier << endl;
// // //         cout << "The Shipping cost is: " << shipping_cost << endl;
// // //     }
// // // };

// // // class InternationalServices : public Courier {
// // // private:
// // //     string Destination;
// // //     double Weight;

// // // public:
// // //     InternationalServices(string courier_id, string name_of_courier, string destination, double weight) :
// // //         Courier(courier_id, name_of_courier), Destination(destination), Weight(weight) {}

// // //     void FinalBill(double base_fare) {
// // //         double total_shipping_cost = base_fare * Weight;
// // //         cout << "CourierID: " << CourierID << endl;
// // //         cout << "Name_of_Courier: " << Name_of_Courier << endl;
// // //         cout << "Destination: " << Destination << endl;
// // //         cout << "Weight: " << Weight << endl;
// // //         cout << "Total Shipping Cost=" << total_shipping_cost << endl;
// // //         cout << (total_shipping_cost > 100 ? "More Sale" : "Less Sale") << endl;
// // //     }
// // // };

// // // int main() {
// // //     string courier_id, name_of_courier, destination;
// // //     double base_fare, weight;

// // //     cout << "Enter the Courier ID: ";
// // //     getline(cin, courier_id);
// // //     cout << "Enter the Name of the Courier: ";
// // //     getline(cin, name_of_courier);
// // //     cout << "Enter the Base Fare: ";
// // //     cin >> base_fare;
// // //     cout << "Enter the Weight in KG: ";
// // //     cin >> weight;

// // //     InternationalServices courier(courier_id, name_of_courier, "", weight);
// // //     courier.PrintBill(base_fare);
// // //     courier.FinalBill(base_fare);

// // //     return 0;
// // // }
// // // #include <iostream>
// // // using namespace std;

// // // class DB; 

// // // class DM {
// // // private:
// // //     int meters;
// // //     float centimeters;

// // // public:
// // //     DM() : meters(0), centimeters(0) {}
// // //     DM(int m, float cm) : meters(m), centimeters(cm) {}

// // //     void display() const {
// // //         cout << "Distance in meters and centimeters: " << meters << " meters " << centimeters << " centimeters" << endl;
// // //     }

// // //     friend DM operator+(const DM& dm, const DB& db); 
// // // };

// // // class DB {
// // // private:
// // //     int feet;
// // //     float inches;

// // // public:
// // //     DB() : feet(0), inches(0) {}
// // //     DB(int ft, float in) : feet(ft), inches(in) {}

// // //     friend DM operator+(const DM& dm, const DB& db); 
// // // };

// // // DM operator+(const DM& dm, const DB& db) {
// // //     float totalCentimeters = dm.meters * 100 + dm.centimeters + db.feet * 30 + db.inches * 2.54;
// // //     int newMeters = totalCentimeters / 100;
// // //     float newCentimeters = totalCentimeters - newMeters * 100;
// // //     return DM(newMeters, newCentimeters);
// // // }

// // // int main() {
// // //     int m, ft;
// // //     float cm, in;

// // //     cout << "Enter distance in meters and centimeters: ";
// // //     cin >> m >> cm;

// // //     cout << "Enter distance in feet and inches: ";
// // //     cin >> ft >> in;

// // //     DM dm1(m, cm);
// // //     DB db1(ft, in);

// // //     DM result = dm1 + db1;

// // //     cout << "Resultant distance: ";
// // //     result.display();

// // //     return 0;
// // // }
// // // #include <iostream>
// // // #include <string>
// // // using namespace std;

// // // class BankAccount {
// // // protected:
// // //     string accountNumber;
// // //     string accountHolderName;
// // //     double balance;

// // // public:
// // //     BankAccount(string accNum, string accHolderName, double bal) : accountNumber(accNum), accountHolderName(accHolderName), balance(bal) {}

// // //     void deposit(double amount) {
// // //         balance += amount;
// // //         cout << "Deposit of " << amount << " successful. Current balance: " << balance << endl;
// // //     }

// // //     void withdraw(double amount) {
// // //         if (balance >= amount) {
// // //             balance -= amount;
// // //             cout << "Withdrawal of " << amount << " successful. Current balance: " << balance << endl;
// // //         } else {
// // //             cout << "Insufficient balance." << endl;
// // //         }
// // //     }

// // //     void display() {
// // //         cout << "Account Number: " << accountNumber << endl;
// // //         cout << "Account Holder Name: " << accountHolderName << endl;
// // //         cout << "Balance: " << balance << endl;
// // //     }
// // // };

// // // int main() {
// // //     BankAccount acc1("123456", "John Doe", 1000);
// // //     acc1.display();
// // //     cout << endl;

// // //     acc1.deposit(500);
// // //     acc1.withdraw(200);
// // //     acc1.display();

// // //     return 0;
// // // }
// // // #include <iostream>
// // // #include <string>
// // // using namespace std;
// // // class Employee {
// // // private:
// // // int emp_num;
// // // string name;
// // // string designation;
// // // public:
// // // Employee() {
// // // cout << "Enter employee number: ";
// // // cin >> emp_num;
// // // cout << "Enter name: ";
// // // cin >> name;
// // // cout << "Enter designation: ";
// // // cin >> designation;
// // // }
// // // void show_basic_emp_details() {
// // // cout << "Employee number: " << emp_num << endl;
// // // cout << "Name: " << name << endl;
// // // cout << "Designation: " << designation << endl;
// // // }
// // // };
// // // class Salary : private Employee {
// // // private:
// // // float basic_pay;
// // // float hra;
// // // float da;
// // // float pf;
// // // public:
// // // Salary() {
// // // cout << "Enter basic pay: ";
// // // cin >> basic_pay;
// // // cout << "Enter HRA: ";
// // // cin >> hra;
// // // cout << "Enter DA: ";
// // // cin >> da;
// // // cout << "Enter PF: ";
// // // cin >> pf;
// // // }
// // // void show_emp_details() {
// // // Employee::show_basic_emp_details();
// // // cout << "Basic pay: " << basic_pay << endl;
// // // cout << "HRA: " << hra << endl;
// // // cout << "DA: " << da << endl;
// // // cout << "PF: " << pf << endl;
// // // cout << "Net pay: " << (basic_pay + hra + da - pf) << endl;
// // // }
// // // };
// // // class BankDetails : private Salary {
// // // private:
// // // string bank_name;
// // // int acc_no;
// // // public:
// // // BankDetails() {
// // // cout << "Enter bank name: ";
// // // cin >> bank_name;
// // // cout << "Enter account number: ";
// // // cin >> acc_no;
// // // }
// // // void show_all_emp_details() {
// // // Salary::show_emp_details();
// // // cout << "Bank Name: " << bank_name << endl;
// // // cout << "Account Number: " << acc_no << endl;
// // // }
// // // };
// // // int main() {
// // // BankDetails emp1;cout<<"-------------------"<<endl;
// // // emp1.show_all_emp_details();
// // // return 0;
// // // }
// // // 
// // // #include <iostream>
// // // #include <cmath>
// // // using namespace std;
// // // inline double area(int r) {
// // // if (r > 0) return M_PI * r * r;
// // // else return -1;
// // // }
// // // int main() {
// // // int r;
// // // cin >> r;
// // // double a = area(r);
// // // if (a == -1) cout << "Invalid" << endl;
// // // else cout << a << endl;
// // // return 0;
// // // }
// #include <iostream>
// #include <string>
// using namespace std;
// class Employee {
// private:
// int emp_num;
// string name;
// string designation;
// public:
// Employee() {
// cout << "Enter employee number: ";
// cin >> emp_num;
// cout << "Enter name: ";
// cin >> name;
// cout << "Enter designation: ";
// cin >> designation;
// }
// void show_basic_emp_details() {
// cout << "Employee number: " << emp_num << endl;
// cout << "Name: " << name << endl;
// cout << "Designation: " << designation << endl;
// }
// };
// class Salary : private Employee {
// private:
// float basic_pay;
// float hra;
// float da;
// float pf;
// public:
// Salary() {

// cout << "Enter HRA: ";
// cin >> hra;
// cout << "Enter DA: ";
// cin >> da;
// cout << "Enter PF: ";
// cin >> pf;
// }
// void show_emp_details() {
// Employee::show_basic_emp_details();

// cout << "HRA: " << hra << endl;
// cout << "DA: " << da << endl;
// cout << "PF: " << pf << endl;
// cout << "Net pay: " << (basic_pay + hra + da - pf) << endl;
// }
// };
// class BankDetails : private Salary {
// private:
// string bank_name;
// int acc_no;
// public:
// BankDetails() {
// cout << "Enter bank name: ";
// cin >> bank_name;
// cout << "Enter account number: ";
// cin >> acc_no;
// }
// void show_all_emp_details() {
// Salary::show_emp_details();
// cout << "Bank Name: " << bank_name << endl;
// cout << "Account Number: " << acc_no << endl;
// }
// };
// int main() {
// BankDetails emp1;cout<<"-------------------"<<endl;
// emp1.show_all_emp_details();
// return 0;
// }
