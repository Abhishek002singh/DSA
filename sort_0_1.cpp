#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sortone(int arr[], int n)
{
    int left=0;
    int right=n-1;
    while (left<right)
    {
        // use either while or if (if seems to be good)
        //while (arr[left]==0 && left<right)
        if (arr[left]==0 )
        {
            left++;
        }
        //while (arr[right]==1 && left<right)
        else if (arr[right]==1)
        {
            right--;
        }
        //while (arr[left]==1 && arr[right]==0 && left<right)
        else 
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
    
}
int main()
{
    int arr[8]={1,1,0,0,0,0,1,0};
    cout<<"array before sorting "<<endl;
    printarray(arr,8);
    cout<<"array aftre sorting "<<endl;
    sortone(arr,8);
    printarray(arr,8);
}