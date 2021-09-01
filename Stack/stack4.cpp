/*Reversing a LinkedList using stack*/
/*Reversing a LinkedList
1.) Reversing Links through iterative way
2.) Recursion uses implicit stack
3.) Using stack STL */
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void Insert(int x){
     Node* temp = new Node();
     temp -> data = x;
     temp -> next = NULL;
     if(head == NULL)
     { head = temp;
      return;
     }
    Node* temp1 = head;
    while(temp1 -> next != NULL){
        temp1 = temp1 -> next;
    }
    temp1 -> next = temp;   
}

void Print(){
  Node* temp = head;
  while(temp != NULL){
      cout<< temp->data<<" ";
      temp = temp -> next;
  }

}

/*using stack to store addresses of nodes*/
void Reverse(){
    if(head == NULL) return;
    stack<struct Node* > st;
    Node* temp = head;
    
    //pushing references on stack
    while(temp != NULL){
        st.push(temp);
        temp = temp -> next;
    }
    temp = st.top();
    head = temp; //reassigning head is not an issue we have already stored the ref of nodes
    st.pop();
    //traverse until stack is empty
    while(!st.empty()){
        temp-> next = st.top();
            st.pop();
            temp = temp -> next;
    }
    temp -> next = NULL;
}


int main(){
Insert(1);
Insert(2);
Insert(3);
Insert(4);
Insert(5);
cout<<"Before Reversing: ";
Print();
Reverse();
cout<<"\nAfter Revsersing: ";
Print();
return 0;
}