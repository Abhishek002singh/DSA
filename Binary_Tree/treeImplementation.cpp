#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
node* buildTree(node* root)
{
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;

    root=new node(data);

    if(data==-1)
        return NULL;

    cout<<"Enter data for inserting in to the left of "<<data<<endl;
    root->left=buildTree(root->left);

    cout<<"Enter data for inserting in to the right of "<<data<<endl;
    root->right=buildTree(root->right);

    return root;
}



void levelOrderTraversal(node * root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();

        if(temp==NULL)
        {
            // purana level complete ho chuka hai
            cout<<endl;

            if(!q.empty())
            {
                // queue still has some child nodes
                q.push(NULL);
            }
        }

        else
        {
            cout<<temp->data<<" ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}


void inorder(node* root)
{
    // base case  LNR
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


void preorder(node* root)
{
    // base case  NLR
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node* root)
{
    // base case  LRN
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    node* root=NULL;

    // creatig a tree

    root=buildTree(root);

    // levelOrder
    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    // inorder
    cout<<"Inorder traversal: ";
    inorder(root);
    cout<<endl;

    // preorder
    cout<<"Preorder traversal: ";
    preorder(root);
    cout<<endl;

    // postorder
    cout<<"Postorder traversal: ";
    postorder(root);

    return 0;
}
