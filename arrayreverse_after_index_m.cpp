#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,7,6,3,5,72,34,32,4,11};
    int m;
    int n=sizeof(arr)/sizeof(int);
    cout<<"enter the index number "<<endl;
    cin>>m;
    int start=m+1;
    int end=n-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"element after the reversing: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

