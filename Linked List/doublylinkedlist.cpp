/*Doubly Linked List */
//Advantage : Reverse look-up
//deletion becomes easier : only one pointer 
//is used
//disadvantage : extra mem for pointer to prev node
//more prone to errors when insertion
//implement insert at head, tail, print, reverse print
 #include<bits/stdc++.h>
 using namespace std;
 struct Node{
     int data;
     Node* next;
     Node* prev;
 };
 Node* head;
 Node* GetNewNode(int data){
     Node* temp = new Node();
     temp -> data = data;
     temp -> next = NULL;
     temp -> prev = NULL;
     return temp;
 }
 Node* insertathead(Node* head, int data){
     Node* temp = GetNewNode(data);
     if(head == NULL){
         head = temp;
         return head;
     }
     head -> prev = temp;
     temp -> next = head;
     head = temp;
     return head;
 }
 Node* insertattail(Node* head, int data){
     Node* temp = GetNewNode(data);
     if(head == NULL){
         head = temp;
         return head;
     }
     Node* phead = head;
     while(phead -> next != NULL){
          phead = phead -> next;
     }
     phead -> next = temp;
     temp -> prev = phead;
     return head;
 }
 void Print(){
     cout<<"\nList is : ";
     Node* temp = head;
     while(temp != NULL){
         cout<<temp->data<<" ";
         temp = temp -> next;
     }
 }
 void ReversePrint(){
     
     Node* temp = head;
     if(temp == NULL) return;
     
     //reach last node
     while(temp-> next != NULL){
      temp = temp -> next;
     }
     cout<<"\nReverse: ";
     while(temp != NULL){
         cout<<temp->data<<" ";
         temp = temp->prev;
     }
 }
 int main(){
     head = NULL;
     head = insertathead(head, 4);
     Print();
     ReversePrint();
     head = insertathead(head, 3);
     Print();
     ReversePrint();
     head = insertathead(head, 2);
     Print();
     ReversePrint();
     head = insertathead(head, 1);
     Print();
     ReversePrint();
     head = insertattail(head, 5);
     Print();
     ReversePrint();
     head = insertattail(head, 6);
     Print();
     ReversePrint();
     
     return 0;
 }