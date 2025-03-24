
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){

    int n;
    cin>>n;
  ll a[n];
    for(ll i =0;i<n;i++){
        cin>>a[i];
    }
    ll sum = 0;
     for(ll i =0;i<n;i++){
        if(a[i]>0){
            sum+=a[i];
        }else {
            sum+= -1*a[i];
        }
    }
    cout<<sum<<endl;







}

int main(){
   long long t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

