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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define tc  int t;cin>>t;while(t--)
#define it(x) for(auto it:x){ cout<<it<<" "; } cout<<endl
#define imax INT_MAX
#define imin INT_MIN
#define max-elem(arr) *max_element(arr.begin(),arr.end())
#define min-elem(arr) *min_element(arr.begin(),arr.end())
#define ll long long 
#define mod 1000000007


int main(){
   int t;
   cin>>t;
   while(t--){
       int n ;
       cin>>n;
       int a[n];
       int sum =0;
       r(i,0,n){
           cin>>a[i];
           sum = sum + a[i];
       }
       if( sum<n){
           cout<<1<<endl;
         
       }else if(sum == n)cout<<0<<endl;
       else {
           cout<<abs(sum-n)<<endl;
       }
   }
    return 0;
}