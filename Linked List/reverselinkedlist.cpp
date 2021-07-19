/*Reverse a linkedList iteratively */
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* Insert(Node* head, int data){
    Node* temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    if(head == NULL){
        head =  temp;
        return head;
    }
    Node* temp2 = head;
    while(temp2 -> next != NULL){
        temp2 = temp2 -> next;
    }
    temp2 -> next =  temp;
    
    return head;
}
void Print(Node* head){
    cout<<"\n List is : ";
    while(head != NULL){
        cout<< head->data<<" ";
        head = head -> next;
    }
}
Node* Reverse(Node* head){
  Node* prev, *current, *next;
  current = head;
  prev = NULL;
  while(current != NULL){
      next = current -> next;
      current -> next = prev;
      prev = current;
      current = next;
  }
  head = prev;
  return head;
}
int main(){
    Node* head = NULL;
 head = Insert(head, 1);
    head =Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);
    head = Insert(head, 5);
    Print(head);
    head = Reverse(head);
    Print(head);
    return 0;
}