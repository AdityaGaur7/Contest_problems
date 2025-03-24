
#include<bits/stdc++.h>
using namespace std;

void solve(){

  int n;
  cin>>n;
 
  int maxi = INT_MIN,mini = INT_MAX;
  for(int i =0;i<n;i++){
    int a;
    cin>>a;
    maxi = max(maxi,a);
    mini = min(mini,a);
   
  }

cout<<abs(maxi - mini)<<endl;
}

int main(){
   long long t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

