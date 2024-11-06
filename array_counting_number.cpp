#include<iostream>
using namespace std;
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
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
    
}