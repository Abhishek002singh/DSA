// good questions
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of element upto which you want to print the patern:";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while(col<=(n-row+1))
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
    
}
*/










/*

#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"Enter the no of element upto which you want to print the patern:";
    cin>>n;
    int row=1;
    while (row<=n)
    {
       // Space print kar lo
       int space=row-1;
       while(space!=0)
       {
        cout<<" ";
        space=space-1;
       }
      
       int col=1;
       while (col<=n-row+1)
       {
        cout<<"*";
        col++;
       }
       cout<<endl;
       row++;
       
    }
    
}
*/















/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of element upto which you want to print the patern:";
    cin>>n;
    int row=1;
    while (row<=n)
    {
       // Space print kar lo
       int space=n-row;
       while(space!=0)
       {
        cout<<" ";
         space=space-1;
       }
      
       int col=1;
       while (col<=row)
       {
        cout<<row;
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
    cout<<"Enter the no of element upto which you want to print the patern:";
    cin>>n;
    int row=1;
    while (row<=n)
    {
       // Space print kar lo
       int space=row-1;
       while(space!=0)
       {
        cout<<" ";
        space=space-1;
       }
      
       int col=1;
       while (col<=n-row+1)
       {
        cout<<row;
        col++;
       }
       cout<<endl;
       row++;
       
    }
    
}
*/







/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of rows upto which you want to print the patern: ";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int space=row-1;
        while (space!=0)
        {
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while (col<=n-row+1)
        {
            cout<<row+col-1;
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
    cout<<"Enter the nu,ber of rows upto which you want to print the patern: ";
    cin>>n;
    int row=1;
    int count=1;
    while (row<=n)
    {
        int space=n-row;
        while (space!=0)
        {
            cout<<" ";
            space=space-1;
        }
        int col=1;
        while (col<=row)
        {
           cout<<count;
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
    cout<<"enter the no of rows upto which you want to print the patern: ";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        //first triangle(space)
        int space=n-row;
        while (space!=0)
        {
            cout<<" ";
            space=space-1;
        }
        // print second triangle
        int col=1;
        while (col<=row)
        {
           cout<<col;
           col=col+1;
        }
        // print third triangle
        int start=row-1;
        while (start!=0)
        {
            cout<<start;
            start=start-1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
/*








// And the last patern(master patern)
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of rowss upto which you want to print the patern: ";
    cin>>n;
    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=n-row+1)
        {
            cout<<col;
            col=col+1;
        }
        
        while (col<=2*(row-1))
        {
            cout<<"*";
            col=col+1;
        }
        while (col<n-row+1)
        {
            cout<<n-row+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
}
*/