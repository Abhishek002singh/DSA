#include<iostream>
using namespace std;


class CircularQueue{
    int* arr;
    int qfront;
    int rear;
    int size;


    CircularQueue(int n)
    {
        size = n;
        arr=new int[size];
        qfront=rear=-1;
    }

};


int main()
{

}