
#include<iostream>
using namespace std;
class employee{
    int id[20];
    char name[20];
    int count;
    public:
    void getdata();
    void putdata();


};

void employee::getdata(){
    cout<<"Enter the id of the employee: ";
  cin>>id[count];


    cout<<"Enter the name of the employee: ";
    cin>>name[count];
    count++;
}

int main()
{
    employee e;
    e.getdata();
    e.putdata();

    return 0;
}

