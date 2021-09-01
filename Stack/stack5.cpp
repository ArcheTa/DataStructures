
/*VALID PARANTHESIS LEETCODE QUESTION*/

#include<bits/stdc++.h>
using namespace std;
bool arepair(char opening, char closing){
  if(opening == '(' && closing == ')') return true;
  if(opening == '{' && closing == '}') return true;
  if(opening == '[' && closing == ']') return true;
}
bool check(string s){
    stack<char> st;
 for(int i = 0; i < s.size(); i++){
     if(s[i] == '(' || s[i] == '{'  || s[i] == '[')
       st.push(s[i]);
     else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
         if(st.empty() || !arepair(st.top(), s[i]))
          return false;
         else 
          st.pop(); 
     }  
 }
  return st.empty()? true: false;
}
int main(){
    string s = "({)";
    bool ans = check(s);
    cout<<ans;
    return 0;
}