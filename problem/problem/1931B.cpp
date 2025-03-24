
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
ll n;
cin>>n;

ll a[n];
ll sum = 0;
for(ll i =0;i<n;i++){
  cin>>a[i];
  sum+=a[i];
}

ll t = sum /n;

ll ans = 0;
for(ll i=0;i<n;i++){
    ans+=a[i];
    if(ans<(i+1)*t){
        cout<<"NO\n";
        return;
    }
}
cout<<"YES\n";






}

int main(){
   long long t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

