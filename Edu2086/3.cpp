////////////////////----------Adgaur----------////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
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
#define pt(x) cout << x << endl;
#define brk cout << "\n";
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void process(int n, vi &p, vi &d) {
    vi c(n + 1, 0), s;
    int id = 0;
    for (int i = 1; i <= n; i++) {
        if (c[i]) continue;
        id++;
        int cur = i, cnt = 0;
        while (!c[cur]) c[cur] = id, cnt++, cur = p[cur];
        s.pb(cnt);
    }
    vector<bool> f(id + 1, false);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int idx = d[i], cid = c[idx];
        if (!f[cid]) f[cid] = true, ans += s[cid - 1];
        cout << ans << " ";
    }
    cout << "\n";
}

int32_t main() {
    fastio;
    tc {
        int n; cin >> n;
        vi p(n + 1), d(n + 1);
        for (int i = 1; i <= n; i++) cin >> p[i];
        for (int i = 1; i <= n; i++) cin >> d[i];
        process(n, p, d);
    }
}