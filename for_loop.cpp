#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value upto which you wnt to print the sum: "<<endl;
    cin>>n;
    int sum=0;
    //for (int i = 0; i <= n; i++)
    int i=0;
    while(i<=n)
    {
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
}