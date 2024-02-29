#include<iostream>
#include<queue>
using namespace std;


void display(queue<int>q){
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }

int main(){
    int arr[]={1,23,5,4,74,26,15};
    int n=7;
    int k= 3;

    queue<int>q;
    for(int i=0; i<k-1;i++)
    q.push(arr[i]);

    for(int i=k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        q.pop();

    }
    return 0;

}