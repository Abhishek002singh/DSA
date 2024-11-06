#include<iostream>
using namespace std;

class A{
    public:
    int age;

    public:
    void Speaking(){
        cout<<"They all are speaking"<<endl;
    }
};

class B{
    public:
    int weight;

    public:
    void Walk(){
        cout<<"They are walking in a garden"<<endl;
    }
};

class C: public A, public B{

};

int main(){
    C c1;
    c1.Speaking();
    c1.Walk();
}