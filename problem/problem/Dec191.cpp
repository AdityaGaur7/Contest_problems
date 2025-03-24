#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s;

 string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 unordered_map<char,int>mp;
 for (int i=0;i<26;i++) 
 {
    mp[a[i]]=i+1;  
 }
 unordered_map<char,int>ans;
 for(int i=0;i<n;i++){
  
  ans[s[i]]++;

 }
 int x = 0;
 for(auto it:ans){
    if(it.second>=mp[it.first])x++;
 }
 cout<<x<<endl;




 }
 return 0;
}