/*circular queue to avoid wasting away the space */
#include<bits/stdc++.h>
using namespace std;
#define MAX 5
int A[MAX];
int front = -1;
int rear = -1;
bool isFull(){
    if((rear+1) % MAX == front)
     return true;
    return false; 
}
bool isEmpty(){
    if(rear == -1 && front == -1)
     return true;
    else 
     return false; 
}
void enqueue(int x){
    if(isFull()){
     cout<<"\nError queue full\n";
     return;
    }
    if(isEmpty()){
        rear = 0;
        front = 0;
        A[rear] = x;
    } 
    else{
    rear = (rear + 1) % MAX;
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
        front = (front + 1)%MAX;
    } 
}

void top(){
    cout<<"\nQueue first element : "<<A[front];
}





int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    top();
    dequeue();
    enqueue(6);
    top();
        
        

    
    return 0;
}