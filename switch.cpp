/*
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    int num;
    cout << "chose case:" << endl;
    cin >> num;
    switch (num)
    {
    case 1:

        cout << (a / b) << endl;
        break;

    case 2:

        cout << (a + b) << endl;
        break;

    case 3:

        cout << (a * b) << endl;
        break;

    case 4:

        cout << (a - b) << endl;
        break;

    default:
        cout << "invalid case chosen:" << endl;
        break;
    }
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    char op;
    cout << "chose operation:" << endl;
    cin >> op;
    switch (op)
    {
    case '/':

        cout << (a / b) << endl;
        break;

    case '+':

        cout << (a + b) << endl;
        break;

    case '*':

        cout << (a * b) << endl;
        break;

    case '-':

    cout << (a - b) << endl;
        break;

    default:
        cout << "invalid case chosen:" << endl;
        break;
    }
}
*/

#include <iostream>
using namespace std;
int main()
{
    int n = 1330;
    int num;
    cout<<"enter case no.:"<<endl;
    cin >> num;
    switch (num)
    {
    case 1:
        n = n / 100;
        cout << "the number of noted of rs 100 is: " << n << endl;
        break;
    
    case 2:
        n=n%100;
        n = n / 50;
        cout << "the number of notes of rs 50 is: " << n << endl;
        break;

    case 3:
        n=n%100;
         n=n%50;
        n = n / 20;
        cout << "the no of notes of rs 20 is: " << n << endl;
        break;

    case 4:
        n=n%100;
        n=n%50;
        n=n%20;
        n = n / 1;
        cout << "the no of notes of rs 1 is: " << n << endl;
        break;

    default:
        cout << "invalid case. " << endl;
        break;
    }
}