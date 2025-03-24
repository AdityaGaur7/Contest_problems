#include <bits/stdc++.h>
using namespace std;

#define vecv vector<int> v
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x,y) make_pair(x,y)
#define vp vector<pair<int,int>> vp
#define sort(a) sort(a.begin(),a.end())
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define all(a) (a.begin()),(a.end())
#define r(i,a,b) for( int i = a; i < b; i++)
#define print(x) cout<<x<<endl
#define tc(t) int t;cin>>t;while(t--)
#define it(x) for(auto it:x){ cout<<it<<" "; } cout<<endl
#define imax INT_MAX
#define imin INT_MIN
#define ll long long 
#define mod 1000000007

void solve()
{
    ll n;
    cin >> n;

    if (n % 2 == 0) {
        n = n / 2;
        cout << n * (n + 1) << endl;
    } else {
        n = n / 2;
        cout << n * (n + 1) + n + 1 << endl;
    }
}

int main() {
   
    tc(t) {
        solve();
    }
    return 0;
}
