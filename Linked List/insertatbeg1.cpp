/*inserting at the beg when head is not a global variable, pass head by value METHOD 1*/
#include<bits/stdc++.h>
using namespace std;
//define the node structure
struct Node{
    int data;
    Node* next;
};
//driver function i.e main
Node* InsertAtBeg(Node* head, int x){
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    if(head != NULL) temp -> next = head;
    head = temp;
    return head;
}
void Print(Node* head){
    cout<<"List is : ";
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}
int main(){
    //head variable
    Node* head = NULL; //when list is empty
    cout<<"How many numbers: ?";
    int n, x;
    cin>>n;
    for(int i = 0; i < n; i++){
        cout<<"Enter a number: ";
        cin>>x;
        head = InsertAtBeg(head,x);
        Print(head);
    }
    return 0;
}