#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
  int a[3];
  for(int i=0;i<3;i++){
      cin>>a[i];
  }
  map<int,int>mp;
   for(int i=0;i<3;i++){
      mp[a[i]]++;
  }
  for(auto it:mp){
      if(it.second==1){
          cout<<it.first<<endl;
          break;
      }
  }
   }
return 0;
}