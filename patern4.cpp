// for better understanding change i->row and row->n
#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Emter the no of rows upto which you want to pirnt patern: "<<endl;
    cin>>row;
    int i=1;  // intialisation of rows
    while (i<=row)
    {
        int col=1;
        while (col<=i)
        {
            cout<<" * ";
            col=col+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    return 0;
    
}