// author - Aditya gaur //
#include<bits/stdc++.h>
using namespace std;
// Macros
#define vecv vector<int>v
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x,y) make_ pair(x,y)
#define vp vector<pair<int,int>>vp
#define sort(a) sort(a.begin(),a.end())
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
  int n ;
  cin>>n;
  int a[n];
  r(i,0,n){
    cin>>a[i];
  }
  int cnt=0;
  int i = 0,mini;
  for (; i < n - 1; i++) {
    mini = i;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < a[mini]) {
        mini = j;
      }
    }
    swap(a[mini],a[i]);
    cnt++;
  }
  if(cnt>1)cout<<"yes"<<endl<<a[mini]<<" "<<a[i]<<endl;
else cout<<"no"<<endl;
}
int main(){
  solve();
    return 0;
}