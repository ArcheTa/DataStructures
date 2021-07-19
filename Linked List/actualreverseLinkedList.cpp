#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head  = NULL;
void Insert(int data){
    Node* temp = new Node();
    temp -> data = data;
    temp-> next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    Node* temp2 = head;
    while(temp2 -> next != NULL) temp2 = temp2 -> next;
    temp2 -> next = temp;
    return;
}
void Reverse(Node* p){
  if(p -> next == NULL){
      head = p;
      return;
  }
  Reverse(p -> next);
  /*Node* q = p->next; // last three lines could be replaced with p->next->next = p
  q -> next = p;*/
  p->next->next = p;
  p->next = NULL;
  
  return;
  
 
}
void Print(){
    cout<<"\n List is : ";
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}

int main(){
     head = NULL;
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Print();
    Reverse(head);
    Print();
    return 0;
}
