#include <bits/stdc++.h>
using namespace std;

bool v(char c){
  if(c=='a' || c == 'e')return true;
  return false;
}

int main() {
int t;
cin>>t;
while(t--){
  int n;
  cin>>n;
  string s;
  cin>>s;
  string r = "";
  int i =0;
  while(i<n){
    if(!v(s[i]) && v(s[i+1]) && !v(s[i+2]) && v(s[i+3])){
      r += s[i];
      r+=s[i+1];

      i=i+2;
      if(i<n)
      r+='.';
      
    }else if(!v(s[i]) && v(s[i+1]) && !v(s[i+2]) && !v(s[i+3])){
     r += s[i];
      r+=s[i+1];
       r+=s[i+2];
      i=i+3;
      if(i<n)
      r+='.';
    }
  }
  string p = " ";
   while(r.find(p) != string::npos){
    
    r.erase(r.find(p),p.size());
  }
   
  cout<<r<<endl;
}
//why compilation error
  return 0;
}