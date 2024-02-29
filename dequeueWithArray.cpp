#include<iostream>
#include<queue>
using namespace std;

class dequeue{
    public:
    int front, rear,size;
    int *arr;

    dequeue(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool IsEmpty(){
        return front ==-1;
    }

    bool IsFull(){
        return (rear+1)%size == front;
    }

    void push_front(int x){
        if(IsEmpty()){
            front = rear=0;
            arr[front]=x;
            cout<<"Pushed "<<x<<" in front of Dequeue\n";
            return;
        }
        else if(IsFull())
        return;
        else{
            front = (front -1 +size)%size;
            arr[front] = x;
            cout<<"Pushed "<<x<<" in front of Dequeue\n";
            return;
        }
    }

    void push_back(int x){
        if(IsEmpty()){
            front = rear=0;
            arr[rear]=x;
            cout<<"Pushed "<<x<<" from back of Dequeue\n";
            return;
        }
        else if(IsFull())
        return;
        else{
            rear = (rear +1)%size;
            arr[rear] = x;
            cout<<"Pushed "<<x<<" from back of Dequeue\n";
            return;
        }
    }

    void pop_front(){
        if(IsEmpty())
        cout<<"Dequeue underflow\n";
        else{
            if(front==rear){
                cout<<"Popped "<<arr[front]<<" element from front\n";
                front=rear=-1;
            }
            else{
            cout<<"Popped "<<arr[front]<<" element from front\n";
            front = (front + 1)%size;
            }
        }
    }

    void pop_back(){
        if(IsEmpty())
        cout<<"Dequeue underflow\n";
        else{
            if(front==rear){
                front=rear=-1;
                cout<<"Popped "<<arr[front]<<" element from back\n";
            }
            else{
            rear = (rear - 1 +size)%size;
            cout<<"Popped "<<arr[front]<<" element from back\n";
            }
        }
    }

    int start(){
        if(IsEmpty())
        return -1;
        else
        return arr[front];
    }

    int end(){
        if(IsEmpty())
        return -1;
        else 
        return arr[rear];
    }

};

int main(){
    dequeue d(5);
    d.push_front(2);
    d.push_front(142);
    cout<<d.start()<<endl;
    d.pop_front();
    d.push_back(75);
    cout<<d.end()<<endl;
    d.pop_front();
    d.pop_front();

}