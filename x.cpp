#include<iostream>
using namespace std;

class Node{
   public:
      int data;
      Node * next;

// constructor
   Node(int d)
   {
      this->data=d;
      this->next=NULL;
   }

// destructor

   ~Node()
   {
      int value = this->data;
      // memory free

      if(this->next != NULL)
      {
         delete next;
         this->next=NULL;
      }
   }
};

void print(Node* head)
{
   Node* temp = head;
   if(head==NULL)
   {
      cout<<"List is empty "<<endl;
   }
   while(temp!=NULL)
   {
      cout<<temp->data<<" ";
      temp=temp->next;
   }
   cout<<endl;
}
void insertAtHead(Node* &head, int data)
{
   Node * temp = new Node(data);
   temp->next=head;
   head=temp;
}

void insertAtTail(Node* &tail, int data){
   Node * temp=new Node(data);
   tail->next=temp;
   tail=temp;
}

void insertAtPosition(Node * &head, Node * &tail,  int position, int data)
{
   if(position==1)
   {
      insertAtHead(head, data);
      return;
   }
   Node * temp = head;
   int count=1;
   while(count<position-1)
   {
      temp=temp->next;
      count++;
   }
   if(temp->next==NULL)
   {
      insertAtTail(tail, data);
      return;
   }

   Node * insertNode = new Node(data);
   insertNode->next=temp->next;
   temp->next=insertNode;
}


void deleteNode(Node * &head, int position){
   // deleting first or start node
   if(position==1)
   {
      Node * temp=head;
      head=head->next;
      temp->next=NULL;
      delete temp;
   }
   else{
      // deleting any middle node or last node
      Node * curr=head;
      Node * prev=NULL;
      int count=1;
      while(count<position)
      {
         prev=curr;
         curr=curr->next;
         count++;
      }
      prev->next=curr->next;
      curr->next=NULL;
      delete curr;
   }
}

int main()
{
   Node * node1 = new Node(5);
   Node * head = node1;
   Node * tail = node1;
   insertAtHead(head, 12);
   insertAtHead(head, 2);
   insertAtTail(tail, 10);
   insertAtPosition(head,tail, 2, 7);
   insertAtPosition(head,tail,1, 4);
   insertAtPosition(head,tail, 7, 9);
   deleteNode(head,2);
   print(head);

}