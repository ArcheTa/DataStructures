//Reverse a string using stack
#include<bits/stdc++.h>
using namespace std;
void Reverse(string s){
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        st.push(s[i]);
    }
    for(int i = 0; i < s.size(); i++){
        s[i] = st.top();
        st.pop();
    }

    for(auto i : s){
        cout<<i;
    }
}
int main(){
    string s = "Hello";
    Reverse(s);
}


/*Time Complexity : o(n)
Space Complexity : o(n) {used stack}
Best approach : two pointers */