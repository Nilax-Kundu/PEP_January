#include <bits/stdc++.h>
using namespace std;

class MyQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    MyQueue(int size){
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int val){
        if(front == -1){
            front = 0;
        }
        rear++;
        arr[rear] = val;
    }
    void dequeue(){
        if(front == -1 || front>rear){
            cout<<"Queue underflow"<<endl;
            return;
        }
        front++;
    }
    int getfront(){
        if(front==-1 || front>rear){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[front];
    }

};

int main() {
    
    return 0;
}