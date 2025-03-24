#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
  int n;cin>>n;
  char a[n][n];
  bool sq = true;


  for(int i=0;i<n;i++){
  
    for(int j = 0;j<n;j++){
    cin>>a[i][j];
    }
 
    
  }

  for(int i=0;i<n;i++){
     int cnt = 0;
    for(int j = 0;j<n;j++){
      if(a[i][j] == '1')cnt++;
    }
    if(cnt==1){
        sq = false;
        break;
    }
  }
 



  if(sq)cout<<"SQUARE"<<endl;
  else cout<<"TRIANGLE"<<endl;
  
  
  
   }
  return 0;
}