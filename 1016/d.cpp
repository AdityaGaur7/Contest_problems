////////////////////----------Jai Shree Ram----------////////////////////
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define dl long double
#define vi vector<int>
#define pii pair<int,int>
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
#define pt(x) cout << x << endl;
#define brk cout << "\n";
#define fi(i, a, n) for (int i = a; i < n; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rev(x) reverse(x.begin(), x.end())
#define sz(x) (int)x.size()
#define tc int t; cin >> t; while (t--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod 1000000007
#define endl '\n'
#define sumy(v, x) accumulate(v.begin(), v.end(), x)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))
#define lb(arr, target) (lower_bound(arr.begin(), arr.end(), target) - arr.begin())
#define ub(arr, target) (upper_bound(arr.begin(), arr.end(), target) - arr.begin())
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define PI 3.14159265358979323846

////////----------Adgaur----------////////

ll f(int n, int x, int y) {
    if(n == 1) {
        if(x == 1 && y == 1) return 1;
        if(x == 2 && y == 2) return 2;
        if(x == 2 && y == 1) return 3;
        return 4;
    }
    int h = 1 << (n - 1);
    ll b = 1LL << (2 * (n - 1));
    if(x <= h && y <= h) return f(n - 1, x, y);
    if(x > h && y > h) return b + f(n - 1, x - h, y - h);
    if(x > h && y <= h) return 2 * b + f(n - 1, x - h, y);
    return 3 * b + f(n - 1, x, y - h);
}

pii g(int n, ll d) {
    if(n == 1) {
        if(d == 1) return {1, 1};
        if(d == 2) return {2, 2};
        if(d == 3) return {2, 1};
        return {1, 2};
    }
    int h = 1 << (n - 1);
    ll b = 1LL << (2 * (n - 1));
    if(d <= b) {
        auto p = g(n - 1, d);
        return {p.ff, p.ss};
    }
    if(d <= 2 * b) {
        auto p = g(n - 1, d - b);
        return {p.ff + h, p.ss + h};
    }
    if(d <= 3 * b) {
        auto p = g(n - 1, d - 2 * b);
        return {p.ff + h, p.ss};
    }
    auto p = g(n - 1, d - 3 * b);
    return {p.ff, p.ss + h};
}

void ok() {
    int n, q; cin >> n >> q;
    while(q--) {
        string s; cin >> s;
        if(s == "->") {
            int x, y; cin >> x >> y;
            pt(f(n, x, y));
        } else {
            ll d; cin >> d;
            pii p = g(n, d);
            cout << p.ff << " " << p.ss << endl;
        }
    }
}

int32_t main() {
    fastio;
    tc ok();
    return 0;
}
