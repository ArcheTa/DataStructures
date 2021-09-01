/* Stack implementation using Arrays */

#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
//Push an element into stack
void Push(int x){
    if(top == (MAX_SIZE -1)){
         cout<< "Error Stack Overflow\n";
         return;
    }
    else
     A[++top] = x;
}

//Pop an element from stack
void pop(){
    if(top == -1){
        cout<<"Error: Stack is empty\n";
    }
    else
     top--;
}

//top element
int topp(){
    return A[top];
}

//print

void Print(){
    for(int i = top; i >= 0; i--){
        cout<<A[i]<<"\n";
    }
}

int main(){
    Push(2);
    Push(3);
    Push(4);
    pop();
    Print();
    int x = topp();
    cout<<"\ntop element is "<<x;
    return 0;
}

/*correct way would be to use structs or objects */