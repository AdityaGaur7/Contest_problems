#include<bits/stdc++.h>

using namespace std;

bool fun(string s,int n){
     for(int i=0;i<n;i++){
          if(s[i]=='H' || s[i]=='Q' ||s[i]=='9' )return true;
          
      }
      return false;
}

int main() {
    
       string s;
      cin>>s;
      int n = s.length();
     bool flag = fun(s,n);
     if(flag)cout<<"Yes";
     else cout<<"No";
        
    

    return 0;
}
