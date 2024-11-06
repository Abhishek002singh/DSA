// by user diefined function
/*
#include <iostream>
using namespace std;

int getmax(int arr[], int size)
{
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getmin(int arr[], int size)
{
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout << "ENter size of array: ";
    cin >> size;
    int arr[100];
    cout << "ENter array element " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "max is: " << getmax(arr, size) << endl;
    cout << "min is: " << getmin(arr, size) << endl;
}
*/








// by predefined function
#include <iostream>
using namespace std;

int getmax(int arr[], int size)
{
    int num = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        num=max(arr[i],num);  // here max is predefined function
    }
    return num;
}
int getmin(int arr[], int size)
{
    int num = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        num=min(arr[i],num);    // here min is predefined function
    }
    return num;
}

int main()
{
    int size;
    cout << "ENter size of array: ";
    cin >> size;
    int arr[100];
    cout << "ENter array element " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "max is: " << getmax(arr, size) << endl;
    cout << "min is: " << getmin(arr, size) << endl;
}
