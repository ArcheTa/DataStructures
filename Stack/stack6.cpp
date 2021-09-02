/*Evaluation of postfix expression*/
#include<bits/stdc++.h>
using namespace std;
int performOp(char ch, int operand1, int operand2){
    if(ch == '+' ) return operand1 + operand2;
    else if(ch == '*' ) return operand1 * operand2;
    else if(ch == '/' ) return operand1 / operand2;
    else if(ch == '-' ) return operand1 - operand2;
    else cout<<"unexpected error";
    return -1;
}

bool isoperator(char ch){
    if(ch == '*' || ch == '-' || ch == '+' || ch == '/')
     return true;
    return false; 
}

bool isnum(char ch){
    if(ch >= '0' && ch <= '9')
     return true;
    return false; 

}
void evaluateexp(string exp){
    stack<int> st;
    for(int i = 0; i <= 0; i++){
        if(exp[i] == ' ' || exp[i] == ',') continue;
        else if(isoperator(exp[i])){
            int operand1 = st.top(); st.pop();
            int operand2 = st.top(); st.pop();
            int result = performOp(exp[i], operand1, operand2);
            //continue here
            st.push(result);

        }
        else if(isnum(exp[i])){
            //continue
            int operand = 0;
            while(i < exp.length() && isnum(exp[i])){
                operand = (operand * 10 ) + (exp[i] - '0');
                i++;
            }
            i--;
            st.push(operand);
        }
    }
    cout<<st.top();
}


int main(){
    string exp = "2 5 *";
    //int result = 
    evaluateexp(exp);
    //cout<<"Postfix evaluation: "<<result;
    return 0;
}

/*To write the evaluation of prefix algorithm run loop from the right */