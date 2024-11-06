#include<iostream>
using namespace std;

class Human{
    public:
    string name;
    int age;
    int height;
    int weight;

    public:
    int gatAge()
    {
        return this->age;
    }

    void setWeight(int w)
     {
        this->weight=w;
     }
};

class Male: public Human
{
    public:
    string color;

    public:

    void Sleeping(){
        cout<<"Men are Sleeping"<<endl;
    }
};

int main(){
    Male M1;
    cout<<M1.age<<endl;
    cout<<M1.name<<endl;
    cout<<M1.height<<endl;
    cout<<M1.weight<<endl;
    cout<<M1.color<<endl;
    M1.setWeight(65);
    cout<<M1.weight<<endl;
    M1.Sleeping();

    int a= M1.gatAge();
    cout<<a<<endl;
}