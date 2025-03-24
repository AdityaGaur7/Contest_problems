#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
  string s;
  cin>>s;
  unordered_map<char,int>mp;

  for(int i =0;i<s.size();i++){
    mp[s[i]]++;
  }
  char m ;
  int x = 0, y= 0;
  for(auto it:mp){
    if(it.first == 'A') x = it.second;
    else if(it.first =='B')y = it.second;
    
  }
  // cout<<x<<" "<<y<<endl;
  if(x>y)cout<<"A"<<endl;
  else cout<<"B"<<endl;
 }
  return 0;
}