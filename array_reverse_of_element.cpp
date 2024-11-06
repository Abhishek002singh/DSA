// method 1 
/*#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);     // here we use predefined function(swap)
        start++;
        end--;
    }
    
}
int main()
{
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};
    cout<<"array element before reversing "<<endl;
    printarray(arr,6);
    printarray(brr,5);
    reverse(arr,6);
    reverse(brr,5);
    cout<<"array element after reversing "<<endl;
    printarray(arr,6);
    printarray(brr,5);
}
*/









//by using vector

#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
    int s=0;
    int e=v.size()-1;
    while (s<=e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
    
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v;   //creating array v
    v.push_back(2);
    v.push_back(6);     //inserting element to array
    v.push_back(3);  
    v.push_back(9);
    v.push_back(4);

    vector<int> ans= reverse(v);
    cout<<"print element after reverse  "<<endl;
    print(ans);

}



// method 2 use backward traversing method.