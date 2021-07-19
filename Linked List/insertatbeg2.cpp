#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insertATbeg(Node** pointerTohead, int x){
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    if(*pointerTohead != NULL) temp -> next = *pointerTohead;
    *pointerTohead = temp;
}
void Print(Node* head){
    cout<<"List is  ";
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}
int main(){
    Node* head = NULL;
    cout<<"How many nums ?\n";
    int n, x;
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"Enter a number: ";
        cin>>x;
        insertATbeg(&head, x);
        Print(head);
    }
    return 0;
}