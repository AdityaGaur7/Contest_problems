
#include<bits/stdc++.h>
using namespace std;

void solve(){

  int n;
  cin>>n;
  string s;
  cin>>s;
  string r = s;
  sort(s.begin(),s.end());


  int cnt = 0;
  for(int i = 0; i<n;i++){
    if(s[i]!=r[i])cnt++;
  }
  cout<<cnt <<endl;

}

int main(){
   long long t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

