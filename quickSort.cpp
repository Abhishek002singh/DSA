#include<iostream>
using namespace std;


void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return;
    }

    // partiton karenge
    int p=partiton(arr, s, e);

    // left part sort karenge
    quickSort(arr,s,p-1);

    // right part sort karenge
    quickSort(arr, p+1, e);
}
int main(){
    int arr[]={3,1,7,9,4,0};
    int s=0;
    int n=6;
    quickSort(arr, 0, n-1);
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;w
    return 0;
}