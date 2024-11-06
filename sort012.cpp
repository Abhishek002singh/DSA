#include<iostream>
#include<utility>
using namespace std;
int main()
{
    int arr[7]={0,1,2,2,1,0,1};
    int start=0;
    int end= 6;

    while(start<end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        if(arr[end]==2)
        {
            end--;
        }
        if(arr[start]==2  && arr[end]==0)
        {
            swap(arr[start], arr[end]);
        }

        if(arr[start]==1  && arr[end]==0)
        {
            swap(arr[start], arr[end]);
        }
    }

    cout<<"Sorted array is "<<endl;
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" "<<endl;

    }
}