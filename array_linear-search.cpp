// method 1
#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}
int main()
{
    int arr[10]={5,7,-2,10,12,15,0,5,22,1};
    cout<<"Enter the element to be searched "<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if (found!=0)
    {
        cout<<"Element is found in the array "<<endl;
    }
    else{
        cout<<"element is not found in array "<<endl;
    }
}




//method 2 do in free time