/*delete the node at nth pos */
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int data){
    Node* temp = new Node();
    temp -> data = data;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    Node* temp1 = head;
    while(temp1 -> next != NULL){
        temp1 = temp1 -> next;
    }
    temp1 -> next = temp;
    return;
    
}
void Delete(int n){
    
    Node* temp1 = head;
    if(n == 1){
        head = temp1 -> next;
        free(temp1);
        return;
    }
    for(int i = 0; i < n-2; i++){
        temp1 = temp1 -> next;
    }
    Node* temp2 = temp1 -> next;
    temp1 -> next =  temp2 -> next;
    free(temp2);

}
void Print(){
    Node* temp = head;
    cout<<"\nList is: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
int main(){
    head = NULL;
    Insert(2);
    Print();
    Insert(4);
    Print();
    Insert(6);
    Print();
    Insert(5);
    Print();
    int n;
    cout<<"Enter a pos: \n";
    cin>>n;
    Delete(n);
    Print();
    return 0;
}
