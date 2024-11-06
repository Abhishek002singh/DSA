// online compiler pe run ho rha h vsd m problem h
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the decimal: ";
    cin>>n;
    int i=0;
    int ans=0;
    while (n!=0)
    {
        int bit= n&1;    // yha n ko computer memory binary m hi rkha hoga isiliye n&1 kiya gya h
        ans=(bit*pow(10,i))+ans;
        n = n >> 1;
        i++;
    }
    cout<<"binary form is: "<<ans<<endl;
}