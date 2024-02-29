#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;

    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class dequeue{
    Node *front,*rear;
    public:

    dequeue(){
        front=rear=NULL;
    }

    void push_front(int x){
        if(front==NULL){
            front = rear = new Node(x);
            cout<<"Pushed "<<x<<" in front of Dequeue.\n";
            return;
        }
        else{
            Node *temp = new Node(x);
            temp->next =front;
            front->prev = temp;
            front = temp;
            cout<<"Pushed "<<x<<" in front of Dequeue.\n";
        }
    }

    void push_back(int x){
        if(rear==NULL){
            front = rear = new Node(x);
            cout<<"Pushed "<<x<<" from backward of Dequeue.\n";
            return;
        }
        else{
            Node *temp = new Node(x);
            rear->next =temp;
            temp->prev=rear;
            rear=temp;
            cout<<"Pushed "<<x<<" from backward of Dequeue.\n";
        }
    }

    void pop_front(){
        if(front == NULL)
        cout<<"Dequeue underflow\n";
        
        else{
            Node *temp=front;
            front=front->next;
            cout<<"Popped out "<<temp->data<<" front the dequeue.\n";
            delete temp;

            if(front)
            front->prev =NULL;
            else
            rear=NULL;
        }
    }
    
    void pop_back(){
        if(rear==NULL){
            cout<<"Dequeue underflow\n";
        }
        else{
            Node *temp=rear;
            rear=rear->prev;
            cout<<"Popped out "<<temp->data<<" from backward the dequeue.\n";
            delete temp;

            if(rear)
            rear->next = NULL;
            else
            front =NULL;
        }
    }

    int start(){
        if(front==NULL)
        return -1;
        else
        return front->data;

    }

    int end(){
        if(front==NULL)
        return -1;
        else
        return rear->data;
    }


};

int main(){
    dequeue d;
    d.push_front(5);
    d.push_front(89);
    d.push_front(9);
    cout<<d.end()<<endl;
    d.pop_front();
    cout<<d.start()<<endl;
}