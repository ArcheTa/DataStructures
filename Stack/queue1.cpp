/*Implement queue using LinkedList*/
#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node* next;
};
node* front = NULL;
node* rear = NULL;

void enqueue(int x){
    node* temp = new node();
    temp ->data = x;
    temp -> next = NULL;
    if(rear == NULL && front == NULL){
        front = temp;
        rear = temp;
        return;
    }
    rear -> next = temp;
    rear = temp;
}

void dequeue(){
    node* temp = front;
    if(front == NULL){
        cout<<"\nNo element to del :(";
        return;
    }
    else if(front == rear){
        front = NULL;
        rear = NULL;
    }
    else{
        front = front -> next;
    }
    free(temp);
}

void top(){
    if(front == NULL){
        cout<<"\nQueue is empty :(";
    }
    else
     cout<<"\nTop element of queue is: "<<front->data;
}

void print(){
    cout<<"\nQueue is : ";
    node* temp = front;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    top();
    dequeue();
    enqueue(4);
    top();
    print();
    return 0;
}