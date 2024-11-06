#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
    
}
int main()
{
    int even[8]={1,2,3,4,5,6,7,8};
    int odd[7]={11,12,13,14,15,16,17};
    cout<<"array before swaping "<<endl;
    printarray(even,8);
    printarray(odd,7);
    swapalternate(even,8);
    swapalternate(odd,7);
    cout<<"array after swaping "<<endl;
    printarray(even,8);
    printarray(odd,7);
}