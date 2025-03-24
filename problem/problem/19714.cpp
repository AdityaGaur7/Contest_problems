#include<bits/stdc++.h>
using namespace std;

#define vec vector<int>v
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
string s;
cin>>s;
ll cnt = 1;
ll n = s.size();
bool f =1 ;
ll g =0;
r(i,1,n) {
        if(s[i]==s[i-1])continue;
        else cnt++;
        if(s[i-1]=='0' && s[i]=='1')g=1;    

    }
  
    cout<<cnt-g<<endl;


}

int main(){
 int t;
    cin>>t;
    while(t--){
  solve();

    }
 }