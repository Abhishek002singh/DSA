#include<iostream>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
           return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else            //(key<arr[mid])
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={5,8,11,14,16};
    cout<<"for even array key(8) element is at index  "<<binarysearch(even,6,8)<<endl;
    cout<<"for odd array key(16) element is at index  "<<binarysearch(odd,5,16)<<endl;
}
