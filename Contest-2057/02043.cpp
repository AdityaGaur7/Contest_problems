#include <iostream>
#include <vector>
#include <algorithm>

#define dl long double
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<int,int>>
#define vpl vector<pair<ll,ll>>
#define pb push_back
#define mp make_pair
#define mii map<int,int>
#define mll map<ll,ll>
#define ff first
#define ss second
#define print(a) for(auto it:a)cout<<it<<" ";cout<<endl;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define p(x) cout << x << endl;
#define brk cout << "\n";
#define f(i, a, n) for (int i = a; i < n; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rev(x) reverse(x.begin(), x.end())
#define sz(x) (int)x.size()
#define tc int t; cin >> t; while (t--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod 1000000007
using namespace std;

#define ll long long
#define mod 998244353

ll power(ll base, ll exp) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll ans;
        if (n % 2 == 1) {
            ans = power(2, n - 1);
        } else {
            ans = (3 * power(2, n - 2)) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}