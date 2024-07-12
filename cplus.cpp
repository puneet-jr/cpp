#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d)
    {
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertathead(node* &head , int d)
{
    node* temp=new node(d);
    temp->next= head;
    if(head!=NULL)
    {
    head->prev=temp;
    }
    head=temp;
}

void print(node* head){

    node* temp= head;
    while(temp!=NULL)
    {
cout<<temp->data<<" ";
temp=temp->next;
    }
    cout<<endl;
}

// // gives length of the linked list.

// int getlength(node* head)
// {
//     int len=0;
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         len++;
//         temp=temp->next;
//     }
//     cout<<endl;

// }

int main()
{
   node* n= new node(10);
    node* head=n;
    print(head);

    insertathead(head,20);
    print(head);
    insertathead(head,300);
    print(head);
    insertathead(head,40);
    print(head);
    return 0;
}

// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* prev;
//     node* next;

//     node(int d) {
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// // Pass head by reference to modify the actual head pointer in the caller
// void insertathead(node* &head, int d) {
//     node* temp = new node(d);
//     temp->next = head;
//     if (head != NULL) { // Check if the list is not empty
//         head->prev = temp;
//     }
//     head = temp; // Update the head to the new node
// }

// void print(node* head) {
//     node* temp = head;
//     while(temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     node* head = NULL; // Initialize head as NULL to start with an empty list
//     insertathead(head, 10); // First node
//     print(head);

//     insertathead(head, 20); // New head
//     print(head);

//     insertathead(head, 30); // New head
//     print(head);

//     return 0;
// }