#include<bits/stdc++.h>
using namespace std;
struct meeting{
    int start;
    int end;
    int pos;
};

bool comparator(struct meeting m1, meeting m2){
    if(m1.end < m2.end) return true;
    else if(m1.end > m2.end) return false;
    else if(m1.pos < m2.pos) return true;
    return false;
}
int noofmeet(int s[], int f[], int n){
  struct meeting meet[n];
  for(int i = 0; i < n; i++){
      meet[i].start = s[i], meet[i].end = f[i], meet[i].pos = i+1; 
  }
  //sort by ending time
  sort(meet, meet + n, comparator);
  int limit = meet[0].end;
  int count =1; //count no of meetings poss
  vector<int> ans;
  ans.push_back(meet[0].pos);
  for(int i =1; i < n; i++){
      if(meet[i].start > limit){
          limit = meet[i].end;
          ans.push_back(meet[i].pos);
          count+=1;
      }
  }
  for(auto i : ans)
  cout<<i<<" ";
  return count;
}
int main(){
    int n = 6;
    int s[n] = {1, 0, 3, 8, 5, 8};
    int f[n] = {2, 6, 4, 9, 7, 9};
    int countfinal = noofmeet(s,f, n);
    cout<<'\n'<<countfinal;
    return 0;
}
//SDE sheet greedy ques1
//GFG n number of meetings
