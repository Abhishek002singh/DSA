#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the no of rows upto which you want to print the patern:";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        //space before star print kar lo
        int space=n-row;
        while(space!=0)
        {
            cout<<" ";
            space=space-1;
        }
        //star print kar lo
        int col=1;
        while (col<=row)
        {
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    
}