
#include<bits/stdc++.h>
using namespace std;

void solve(){

int n;
cin>>n;
  string r = "";
  if(n>2 && n<=28){
    int x = n-3;
    r+='a';r+='a';
    r+='a'+x;
  }else if(n>28 && n<54){
    int x = n-28;
    r+='a';
    r+='a'+x;
    r+='z';
  }else{
    int x = n-53;
    r+='a'+x;
    r+='z';
    r+='z';
  }






cout<<r<<endl;
}

int main(){
   long long t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

