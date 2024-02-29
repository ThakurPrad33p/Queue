#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int front,rear,size;

    public:
    Queue(int n){
        arr = new int[n];
        size=n;
        front=rear=-1;
    }

    bool IsEmpty(){
        return rear==-1;
    }

    bool IsFull(){
        return (rear+1)%size ==front;
    }

    int push(int x){
        if(IsEmpty()){
            rear =front =0;
            arr[0]=x;
            cout<<"Pushed "<<arr[0]<<endl;
            return 1;
        }
        else if(IsFull()){
            cout<<"Queue is overflow";
            return -1;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=x;
            cout<<"Pushed "<<arr[rear]<<endl;
            return 1;
        }
    }

    void pop(){
        if(IsEmpty()){
            cout<<"Underflow\n";
        }
        else{
            if(rear==front){
                cout<<"Popped "<<arr[front]<<endl;
                rear=front=-1;
                return;
            }
            else{
                cout<<"Popped "<<arr[front]<<endl;
                front = (front+1)%size;
                return;
            }
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty \n";
            return -1;
        }
        else{
            cout<<"Front element is "<<arr[front]<<endl;
            return 1;
        }
    }

};

int main(){
    Queue q(5);
    q.push(34);
    q.push(12);
    q.push(56);
    q.push(6);
    q.push(60);
    q.pop();

    q.start();
    q.push(2147483647);
    q.start();
    q.pop();
    cout<<q.IsEmpty()<<endl;
   

}