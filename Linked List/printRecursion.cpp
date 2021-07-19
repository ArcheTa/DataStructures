/*Print LinkedList normally using recursion and in reverse order */
#include<bits/stdc++.h>
using namespace std;
//define structure of the node
struct Node{
    int data;
    Node* next;
};
Node* Insert(Node* head, int data){
 Node* temp = new Node();
 temp -> data = data;
 temp -> next = NULL;
 if(head == NULL){
     head = temp;
     return head;
 }
  Node* temp2 = head;
  while(temp2->next != NULL){
      temp2 = temp2 -> next;
  }
  temp2 -> next = temp;
 return head;
}
void Print(Node* head){
   
   if(head == NULL) return;
   cout<<head->data<<" ";
   Print(head -> next);
   
}
void RevPrint(Node* head){
 
 if(head == NULL) return;
 RevPrint(head->next);
 cout<<head->data<<" ";
 
}
int main(){
    Node* head = NULL;
    head = Insert(head, 1);
    head = Insert(head, 2);
    head = Insert(head, 3);
    head = Insert(head, 4);
    head = Insert(head, 5);
    cout<<"\nList 1 is:  ";
    Print(head);
    cout<<"\nReversed List is : ";
    RevPrint(head);
    return 0;
}