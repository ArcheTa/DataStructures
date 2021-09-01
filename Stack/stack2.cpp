/*Stack Implementation using LinkedList*/
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};

node* top = NULL;

void Push(int x){
    node* temp = new node();
    temp-> data = x;
    temp -> next = top;
    top = temp;
}

void Pop(){
    if(top == NULL) return;
    node* temp = top;
    top = temp -> next;
    free(temp);
}

void Print(){
    if(top == NULL)
     return;
    node* temp = top;
    while(temp != NULL){
        cout<<temp -> data<<"\n";
        temp = temp -> next;
    } 
}

void Top(){
    cout<<"Top of Stack is: "<<top->data;
}

int main(){
    Push(2);
    Push(3);
    Push(4);
    Pop();
    Print();
    Top();
    return 0;
}