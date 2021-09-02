/*Implement queue using array*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 10
int A[MAX];
int front = -1;
int rear = -1;
bool isEmpty(){
    if(rear == -1 && front == -1)
     return true;
    else 
     return false; 
}
void enqueue(int x){
    if(rear == MAX -1 )
     return;
    if(isEmpty()){
        rear = 0;
        front = 0;
        A[rear] = x;
    } 
    else{
    rear = rear + 1;
    A[rear] = x;
}
}

void dequeue(){
    if(isEmpty())
     return;
    else if(rear == front){
         rear = -1;
          front = -1;

    }
    else{
        front = front + 1;
    } 
}

void top(){
    cout<<"\nQueue first element : "<<A[front];
}





int main(){
    enqueue(2);
    enqueue(3);
    enqueue(4);
    top();
    dequeue();
    top();
    return 0;
}
