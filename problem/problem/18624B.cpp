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
#define tc(t)  int t;cin>>t;while(t--)
#define it(x) for(auto it:x){ cout<<it<<" "; } cout<<endl
#define imax INT_MAX
#define imin INT_MIN
#define ll long long 
#define mod 1000000007
 

int main(){
    
    tc(t){
        int n;
        cin>>n;
        int a[n];
        r(i,0,n){
            cin>>a[i];
        }
        vecv;
        vpb(a[0]);
       for(int i=1;i<n;i++){
           if(a[i-1]>a[i]){
               vpb(1);
           }
           vpb(a[i]);
       }
       print(v.size());
       it(v);
       
       
       
       
    }
    
    
    
    
    
    
    return 0;
}