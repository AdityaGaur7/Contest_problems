
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

int t;
cin>>t;
while(t--){


int a1,a2,b1,b2,f1,f2;
cin>>a1>>a2>>b1>>b2>>f1>>f2;


ll ans = abs(a1-b1) + abs(a2-b2);
if ((a1 == b1 && a1 == f1 && min(a2, b2) < f2 && f2 < max(a2, b2))
                || (a2 == b2 && a2 == f2 && min(a1, b1) <f1 && f1 < max(a1, b1)))
            ans += 2;
cout<<ans<<endl;

}

}

int main(){
  solve();
    return 0;
 }


   

