#include<iostream>
using namespace std;


class A{
    public:
    void funA(){
        cout<<"Hey, from A"<<endl;
    }
};


class B: public A{
    public:
    void funB(){
        cout<<"Hey, from B"<<endl;
    }
};


class C: public A{
    public:
    void funC(){
        cout<<"Hey, from C"<<endl;
    }
};


int main(){

    A a;
    a.funA();


    B b;
    b.funA();
    b.funB();


    C c;
    c.funA();
    c.funC();
}