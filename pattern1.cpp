// for better understanding change i->row and row->n
#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the no of rows upto which you want to print the pattern: "<<endl;
    cin>>row;
    int i=1;   // initialisation of row 
    while (i<=row) // codition to print upto given number of rows
    {
        int col=1;
        while (col<=row)
        {
           cout<<" * ";
           col=col+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    

}