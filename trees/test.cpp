#include<bits/stdc++.h>
using namespace std;
string factorial(int n){
    int answer = 1;
    for(int i = 1; i <= n; i++){
        answer = answer * i;
    }
    string ans1 = to_string(answer);
    return ans1;
}
int main(){
    int n = 5;
    string ans = factorial(n);
    cout<<ans;
    return 0;
}