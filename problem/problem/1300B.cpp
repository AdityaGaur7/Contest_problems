// author - Aditya gaur //
#include<bits/stdc++.h>
using namespace std;
// Macros
#define vecv vector<int>v
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x,y) make_ pair(x,y)
#define vp vector<pair<int,int>>vp
#define srt(a) sort(a.begin(),a.end())
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define all(a) (a.begin()),(a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define print(x) cout<<x<<endl
#define tc  int t;cin>>t;while(t--)
#define it(x) for(auto it:x){ cout<<it<<" "; } cout<<endl
#define ll long long 
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007

void solve(){
  tc{
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+2*n);
    vector<int>od,en;
     for(int i=0;i<2*n;i++){
        if(a[i]%2==0)en.push_back(a[i]);
        else od.push_back(a[i]);
    }
     int x = en.size()/2;
     int y = od.size()/2;
    int ans = abs(en[x]-od[y]);
    cout<<ans<<endl;
    // for(auto it:en)cout<<it;
  }
}
int main(){
  solve();
    return 0;
}