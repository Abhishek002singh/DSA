// Implementation of queue by using array


#include<iostream>
using namespace std;


class Queue{
    int* arr;
    int qfront;
    int rear;
    int size;


    public:
    Queue()
    {
        size=100001;
        arr=new int[size];
        qfront=0;
        rear=0;
    }

    bool isEmpty()
    {
        if(rear==qfront)
        {
            return true;
        }

        return false;
    }


    void enqueue(int data)
    {
        if(rear==size)
        {
            cout<<"Queue is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }


    void dequeue()
    {
        if(qfront==rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront]=-1;
            qfront++;

            if(qfront == rear)
            {
                qfront = rear = 0;
            }
        }
    }

    int front()
    {
        if(rear==qfront)
        {
            return -1;
        }

        return arr[qfront];
    }
};

int main()
{

}