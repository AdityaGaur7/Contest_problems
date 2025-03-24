#include<bits/stdc++.h>
using namespace std;
// Macros
#define v(v) vector<int>v
#define pb(v,x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x,y) make_ pair(x,y)
#define vp vector<pair<int,int>>vp
// #define sort(a) sort(a.begin(),a.end())
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
#define ll long long 
#define mod 1000000007

void solve(){
 int n;
 cin>>n;
 vector<int>a;
 for(int i=0;i<n;i++){
    int y;
    cin>>y;
    a.push_back(y);
 }
  
    
    // Find the position of the minimum and maximum powers
    int minPos = min_element(a.begin(), a.end()) - a.begin();
    int maxPos = max_element(a.begin(), a.end()) - a.begin();
    
    // Calculate the minimum number of moves required to destroy a with the greatest and lowest power
   cout << min({
            max(maxPos, minPos) + 1,
            (n - 1) - min(maxPos, minPos) + 1,
            (n - 1) - maxPos + minPos + 2,
            (n - 1) - minPos + maxPos + 2
    }) << "\n";


}

int main(){
    tc{
        solve();
    }
    return 0;
}