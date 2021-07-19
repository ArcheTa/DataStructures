#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int data, int n){
    Node* temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    if(n == 1){
        temp->next = head;
        head = temp;
        return;
    }
    Node* temp2 = head;
    for(int i = 0; i < n-2; i++){
        temp2 = temp2-> next;
    }
    temp -> next = temp2 -> next;
    temp2 -> next = temp;
    
}
void Print(){
    Node* temp = head;
    cout<<"List is : ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<"\n";
}
int main(){
    head = NULL;
    Insert(2, 1);
    Insert(3, 2);
    Insert(1, 1); //1 2 3
    Print();
    return 0;
}
