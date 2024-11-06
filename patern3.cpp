
// for better understanding change i->row and row->n
#include<iostream>
using namespace std;
int main()
{
   /* int row;
    cout<<"Enter the no of row upto which you want to print the patern:"<<endl;
    cin>>row;
    int i=1;
    while (i<=row)
    {
        int col=1;
        while (col<=row)
        {
            cout<< (3*(i-1)+col) <<"   ";
            col=col+1;
        }
        cout<<endl;
        i=i+1;
        
    }*/


    /*int row;
    cout<<"Enter the no of row upto which you want to print the patern:"<<endl;
    cin>>row;
    int i=1;
    while (i<=row)
    {
        int col=1;
        while (col<=row)
        {
            cout<< row-col+1<<" ";
            col=col+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    */

int row;
    cout<<"Enter the no of row upto which you want to print the patern:"<<endl;
    cin>>row;
    int i=1;
    int count=1;
    while (i<=row)
    {
        int col=1;
        while (col<=row)
        {
            cout<< count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        i=i+1;
        
    }
   
}