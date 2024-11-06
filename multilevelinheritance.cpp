#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void Speaking(){
        cout<<"Hey hau hau speaking "<<endl;
    }
};

class Dog: public Animal{

};

class GermanSepherd: public Dog{
     public:
     string name;
};


int main(){
    Dog d1;
    GermanSepherd g;
    g.Speaking();
    cout<<d1.age<<endl;
    cout<<d1.weight<<endl;
    cout<<g.name<<endl;
}