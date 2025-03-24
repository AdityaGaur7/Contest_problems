
#include<bits/stdc++.h>
using namespace std;

#define v vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_ pair(x,y)
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define tc  int t;cin>>t;while(t--)
#define ll long long 
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
void solve(){

ll t;
cin>>t;
while(t--){

ll n;
cin>>n;
ll a[n];
int sum = 0;
for(ll i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
}

if(sum%n!=0){
    cout<<-1<<endl;

}else{
    ll avg = sum / n;
    ll cnt  =0;
    for(int i = 0;i<n;i++){
        if(a[i]>avg)cnt++;
    }
    cout<<cnt<<endl;
   
}




}
}

int main(){
  solve();
    return 0;
 }


   

