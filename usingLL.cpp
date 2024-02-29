#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data =value;
        next =NULL;
    }
};

class Queue{
    Node *front,*rear;
    int size;
    public:

    Queue(){
        front =rear =NULL;
    }

    bool IsEmpty(){
        return rear==NULL;
    }

    void push(int x){
        if(IsEmpty()){
            front=new Node(x);
            cout<<x<<" is Pushed\n";
            rear =front;
            return;
        }
        else{
            rear->next =new Node(x);
            cout<<x<<" is Pushed\n";
            rear =rear->next;
            return;
        }
    }

    void pop(){
        if(IsEmpty()){
            cout<<"Queue is Underflow \n";
            return;
        }
        else{
            Node *temp = front;
            front=front->next;
            cout<<temp->data<<" is Popped\n";
            delete temp;
        }
    }
    
    int start(){
        if(IsEmpty()){
            cout<<"There is not even single element\n";
            return -1;
        }
        else{
            return front->data;
        }
    }
};

int main(){
    Queue q;
    q.push(23);
    q.push(2);
    q.push(3);
    q.pop();
    cout<<q.start()<<endl;
    q.pop();
    q.pop();
    
}