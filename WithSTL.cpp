#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(23);
    q.push(74);
    q.push(35);
    q.push(93);
    q.push(20);
    q.push(48);

    int n = q.size();

    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
    cout<<q.size();
    
}