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
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))


void solve(){
  int n ;
  cin>>n;
 vector<int>v;
  for(int i = 0 ;i <n;i++){
int t;
cin>>t;
v.push_back(t);
  }
  int max = INT_MIN,maxidx=0;
  int mini = INT_MAX,minidx=0;
 
 for(int i=0;i<n;i++){
      if(v[i]>max)
      {
      max = v[i];
      maxidx = i;  
      } 
 }
 
 for(int i=n-1;i>=0;i--){
      if(v[i]<mini)
      {
      mini = v[i];
      minidx = i;  
      } 
 }
 if(maxidx <= minidx) minidx = n-1-minidx;
 else minidx = n-2-minidx;
//  cout<<max<<" "<<maxidx<<" "<<mini<<" "<<minidx;
 cout<<minidx+maxidx<<endl;
 
}
int main(){
  solve();
    return 0;
}