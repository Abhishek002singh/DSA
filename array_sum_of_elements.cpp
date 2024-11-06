#include <iostream>
using namespace std;
int sum(int arr[],int size)
{
    int s=0;
    for (int i = 0; i < size; i++)
    {
        s=s+arr[i];
    }
    return s;
}
int main()
{
    int size=5;
    int arr[5]={2,7,1,-4,4};
    cout<<"The given arary is "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The required sum is "<<sum(arr,5)<<endl;
    return 0;
}