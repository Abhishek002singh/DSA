#include<iostream>
using namespace std;

template<typename T>
T mymax(T a, T b)
{
    return (a>b)?a:b;

}
int main()
{
    cout<< mymax <int> (4,8)<<endl;
    cout<< mymax <char>('a','v')<<endl;
    cout<<"Ok, thanks. "<<endl;
    return 0;

}