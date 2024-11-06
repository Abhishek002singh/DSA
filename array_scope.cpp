#include <iostream>
using namespace std;
void update(int arr[], int size)
{
    cout << "Inside the function " << endl;
    arr[0] = 120;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Going back to main function " << endl;
}
int main()
{
    int size = 3;
    int arr[3] = {1, 2, 3};
    cout << "Printing in main function " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    update(arr, 3);
    // after calling update functio in array address is passed instead of passing value
    // thats why in main function value is also updated after calling the function

    cout << "Printing in main function " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}