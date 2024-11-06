#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the position of fabonnaci series: "<<endl;
    cin>>n;
    int a=0;
    int b=1;
    int sum;
    for (int i = 0; i < n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<"Required no. is "<<sum<<endl;
}