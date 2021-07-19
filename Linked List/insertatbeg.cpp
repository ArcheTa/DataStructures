//Inserting a node in the beginning of linked list 
//define structure of node
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
}; //in C pointer to node is defined as struct Node* but is not required in c++
//declaration of head that is pointer to first node
Node* head;
//driver func to take user input
void Insert(int x){
    //create a new node temp with value x and next pointing to NULL
    Node* temp = new Node();// in C we can write as malloc(sizeof(struct Node)) and type cast to 
                            // struct Node* since malloc returns void pointer
    temp -> data = x; //inserting node value to data field, (*temp).data = x
    temp->next = NULL; //next field pointing to the NULL
    //in case list is not empty
    if(head != NULL)
        //we cannot directly link head data as we will lose reference for existing nodes
        //first create link of temp to the existing node
        temp -> next = head;
        head = temp; //Now point head to the new node added
}

void Print(){
    //create a temp node to traverse the List (obv reasons)
    Node* temp = head;
    while(temp != NULL){ //loop until we exhaust the list
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
}
int main(){
    //initially head would be pointing to NULL
    head = NULL;
    //take user input 
    int n, x;
    cout<< "How many Num? ";
    cin>>n;
    for(int i = 0; i < n; i++){
        printf("\nEnter a number: ");
        cin>>x;
        //Now we will define func for insert and printing
        Insert(x);
        Print();
    }
    return 0;
}