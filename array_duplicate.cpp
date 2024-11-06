#include<iostream>
using namespace std;

int findduplicate(int arr[],int n)
{
    int ans;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        ans=ans^i;
    }
    return ans;
}

int main()
{
    int n;
    int i=0;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Input array is "<<endl;
    while(i<n)
    {
        arr[i]=i;
        arr[0]=n-3;
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
    cout<<"Duplicate element is "<<endl;
    findduplicate(arr,8);
}