/*Minimum number of coins from SDE sheet */
#include<bits/stdc++.h>
using namespace std;
void findcoins(int v){
    vector<int> dem{1, 2, 5, 10, 20, 50, 100, 500, 1000};
    vector<int> ans;
    for(int i = dem.size()-1; i>=0; i--){
        while(v >= dem[i]){
            v -=dem[i];
            ans.push_back(dem[i]);
        }
    }
    for(auto i : ans)
    cout<<i<<" ";
}
int main(){
    int v;
    cout<<"Enter a number: ";
    cin>>v;
    findcoins(v);
    return 0;
}