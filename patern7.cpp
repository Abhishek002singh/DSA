
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row up to which you want to print the patern: "<<endl;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        
        while(col<=n)
        {
            char ch='A'+row-1;
        cout<<ch<<" ";
        col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
*/









/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of row up to which you want to print the patern: "<<endl;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        
        while(col<=n)
        {
            char ch='A'+col-1;
        cout<<ch<<" ";
        col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}
*/








/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows upto which you want to print the patern:"<<endl;
    cin>>n;
    int row=1;
    char start='A';
    while (row<=n)
    {
        int col=1;
        while(col<=n)
        {
            cout<<start<<" ";
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
*/






/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rows upto which you want to print the patern:"<<endl;
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=n)
        {
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
*/






/*
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
        int col=1;
        while(col<=row)
        {
            char ch='A'+row-1;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
*/










/*
#include<iostream>
using namespace std;
int main()
{
    int n; 
    cout<<"Enter the no of rows upto which you want to print the patern:";
    cin>>n;
    int row=1;
    char count='A';
    while (row<=n)
    {
        int col=1;
        while(col<=row)
        {
            
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
*/






/*
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
        int col=1;
        while(col<=row)
        {
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
*/








//method 1
/*

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
        int col=1;
        while(col<=row)
        {
            char ch='A'+(n-row)+col-1;
            cout<<ch<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
*/









//method 2

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
        int col=1;
        char start='A'+n-row;
        while(col<=row)
        {
            
            cout<<start<<" ";
            start=start+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}