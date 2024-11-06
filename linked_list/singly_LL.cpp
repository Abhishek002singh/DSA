#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

    // constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

    // Destructor
    ~Node()
    {
        //int val=this->data;
        
        // memory free
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    }
};


// Insertion at Head

void insertAtHead(Node* &head, int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}



void insertAtTail(Node* &tail, int data)
{
    Node* temp=new Node(data);
    Node* curr=tail;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    curr=temp;
}


void insertAtPosition(Node* &head, Node* tail, int position, int data)
{
    //insert at start
    if(position==1)
    {
        insertAtHead(head , data);
        return;
    }
    Node* curr=head;
    int count=1;
    while(count<position-1){
        curr=curr->next;
        count++;
    }
    // insert at tail
    if(curr->next==NULL)
    {
        insertAtTail(head, data);
        return;
    }

    // create a node for given position and data
    Node* temp=new Node(data);
    temp->next=curr->next;
    curr->next=temp;

}




// Deletion of node

void deleteNode(Node* head , int position)
{
    // deleting first node
    if(position==1)
    {
        Node* temp=head;
        head=temp->next;
        temp->next==NULL;
        delete temp;
    }

    else
    {
        Node* curr=head;
        Node*prev=NULL;
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


void print(Node* &head)
{
    

    if(head==NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* node1=new Node(10);
    
    // head point to node1

    Node* head=node1;
    Node* tail=node1;
    
    insertAtHead(head , 4);
    insertAtHead(head , 14);
    insertAtHead(head , 44);
    
    //print(head);
    insertAtTail(head,15);
    //print(head);


    insertAtPosition(head, tail, 3, 5);
    print(head);
    deleteNode(head, 2);
    print(head);
}