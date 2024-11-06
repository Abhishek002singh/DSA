// for better understanding change i->row and row->n
#include<iostream>
using namespace std;
int main()
{
int row;
cout<<"Enter the number upto ehich you want to print patern:";
cin>>row;
int i=1;
while (i<=row)
{
    int col=1;
    while(col<=i)
    {
    cout<< i <<" ";
    col=col+1;
    }
    cout<<endl;
    i=i+1; 
}
}