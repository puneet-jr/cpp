// // // #include<iostream>
// // // using namespace std;

// // // class node{
// // //     public:
// // //     int data;
// // //     node* next;
// // //     node(int val)
// // //     {
// // //         data=val;
// // //         next=NULL;
// // //     }
// // // };

// // // void insertattail(node* &tail,int d)
// // // {
// // //     node* temp = new node(d);
// // //      tail->next =temp;
// // //     tail=tail->next;

// // // }

// // // void insertatmiddle(node* &tail,node* &head,int position,int d)

// // // {
// // //     node* temp= head;
// // //     int cnt=1;
   
// // //     while(cnt<position-1)
// // //     {
// // //         temp=temp->next;
// // //         cnt++;
// // //     }
// // //     node* nodetoinsert= new node(d);
// // //     nodetoinsert->next=temp->next;
// // //     temp->next=nodetoinsert;

// // //      if(temp->next==NULL)
// // //     {
// // //         insertattail(tail,d);
// // //     }

    
// // // }
// // // void print(node* &tail)
// // // {
// // //     node* temp=tail;
// // //     while(temp!=NULL){
// // //     cout<<temp->data<<" ";
// // //     temp =temp->next;
// // //     }
// // //     cout<<endl;
// // // }

// // // int main()
// // // {
// // //     node* n =new node(1);
// // //     node* head=n;
// // //     node* tail=n;
     
// // //     insertattail(n,2);
    
// // //    insertattail(n,3);
   
// // //     insertattail(n,4);
   
// // //     insertattail(n,5);
    

// // //     insertatmiddle(tail,head, 3, 66);
// // //    cout<<tail<<" ";
// // //    cout<<endl;
// // //    cout<<head<<" ";


// // //     return 0; 
// // // }
// // #include<iostream>
// // using namespace std;

// // class node{
// //     public:
// //     int data;
// //     node* next;
// //     node(int val) {
// //         data = val;
// //         next = NULL;
// //     }
// //     ~node()
// //     {
// //         int val= this->data;
// //         if(this->next!=NULL)
// //         {
// //             delete next;
// //             this->next=NULL;
// //         }
// //         cout<<"memory is free for   "<<val<<endl;
// //     }
// // };

// // void insertattail(node* &tail, int d) {
// //     node* temp = new node(d);
// //     tail->next = temp;
// //     tail = temp;
// // }

// // void insertatmiddle(node* &tail, node* &head, int position, int d) {
// //     if (position == 1) { // Insert at head
// //         node* temp = new node(d);
// //         temp->next = head;
// //         head = temp;
// //         return;
// //     }

// //     node* temp = head;
// //     int cnt = 1;
// //     while (cnt < position - 1 && temp->next != NULL) {
// //         temp = temp->next;
// //         cnt++;
// //     }

// //     if (temp->next == NULL) { // Insert at tail
// //         insertattail(tail, d);
// //     } else { // Insert in the middle
// //         node* nodetoinsert = new node(d);
// //         nodetoinsert->next = temp->next;
// //         temp->next = nodetoinsert;
// //     }
// // }

// // void deletenode(int position,node* &head)
// // {
// //     if(position ==1)
// //     {
// //         node* temp =head;
// //         head=head->next;
// //         //memorey free from start
// //         temp->next=NULL;
// //         delete temp;
// //     }
// //     else{
// //         //deleting middle or last node
// //         node* curr= head;
// //         node* prev = NULL;
// //         int cnt=1;

// //         while(cnt<=position)
// //         {
// //             prev=curr;
// //             curr=curr->next;
// //             cnt++;
// //         }
// //         prev->next= curr->next;
// //         curr->next= NULL;
// //         delete curr;
// //     }
// // }
// // void print(node* head) { // Corrected to use head for traversal
// //     node* temp = head;
// //     while (temp != NULL) {
// //         cout << temp->data << " ";
// //         temp = temp->next;
// //     }
// //     cout << endl;
// // }

// // int main() {
// //     node* head = new node(1);
// //     node* tail = head;

// //     insertattail(tail, 2);
// //     insertattail(tail, 3);
// //     insertattail(tail, 4);
// //     insertattail(tail, 5);

// //     insertatmiddle(tail, head, 3, 66);

// //     print(head); // Corrected to print the list

// //     deletenode(1,head);
// //     print(head);
    
// //     return 0;
// // }

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d) {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertathead(node* &head, node* &tail, int d) {
    node* temp = new node(d);
    temp->next = head;
    if (head != NULL) {
        head->prev = temp;
    } else {
        // If the list is empty, the new node is also the tail
        tail = temp;
    }
    head = temp;
}
void insertatmiddle(int position,node* &head,node* tail,int d)
{
    node* temp=head;
    
}

void insertattail(node* &head, node* &tail, int d) {
    if (tail == NULL) {
        // If the list is empty, insert at head
        insertathead(head, tail, d);
        return;
    }
    node* temp = new node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void print(node* head) {
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = NULL;
    node* tail = NULL; // Initialize both head and tail as NULL

    insertathead(head, tail, 10); // First node
    print(head);

    insertathead(head, tail, 20); // New head
    print(head);

    insertathead(head, tail, 30); // New head
    print(head);

    cout << "\n";
    insertattail(head, tail, 100); // Insert at tail
    print(head);

    return 0;
}