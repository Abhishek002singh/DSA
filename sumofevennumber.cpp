#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number upto which you want to find sum: "<<endl;
    cin>>a;
    int i=0;
    int sum=0;
    while (i<=a )
    {
        sum=sum+i;
        i+=2;
    }
    cout<<"the sum of even number from first "<<a<<" natural number is: "<<sum<<endl;
    return 0;
}