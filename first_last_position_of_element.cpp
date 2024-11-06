#include<iostream>
using namespace std;

int firstocc(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;
    int ans;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
           ans=mid;
           e=mid-1;        // to find first occurence of element in sorted array
        }
        else if (key >arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}

int lastocc(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;       // to find last occurence of a element in a sorted array
        }
        else if (key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[7]={1,2,3,3,3,3,5};
    cout<<"First occurence of key(3) element is "<<firstocc(arr,7,3)<<endl;
    cout<<"Last occurence of key(3) element is "<<lastocc(arr,7,3)<<endl;
}