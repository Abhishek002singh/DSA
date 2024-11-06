#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the value upto which you want to sum:"<<endl;
    cin>>a;
    
    int i=0;
    int sum=0;
    while (i<=a)
    {
       sum=sum+i;
       
       i++;
    }
    cout<<"the sum of first " << a << " number is : "<<sum<<endl;
}