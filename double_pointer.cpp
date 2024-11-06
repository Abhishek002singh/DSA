#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int* ptr= &i;
    int** ptr2=&ptr;
     cout<<endl<< endl<< " Jai mata di  "<<endl<<endl;

    cout<<"printing address if i or ptr : "<<ptr<<endl;
    cout<<"printing address of ptr "<<&ptr<<endl;

    cout<<"value at ptr2  that is address of ptr : "<<*ptr2<<endl;

}
