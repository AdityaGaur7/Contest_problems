#include<bits/stdc++.h>
using namespace std;


int main(){
    
  int n,k;
  cin>>n>>k;
  while(k--){
      
      int r = n%10;
      if(r>0 && r<10){
          n--;
      }else if( r == 0){
          n=n/10;
      }
      
      
  }
  cout<<n;
return 0;
}



