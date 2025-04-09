////////////////////----------Jai Shree Ram----------////////////////////
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
#define f(i, a, n) for (int i = a; i < n; i++)
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

bool can(int x, vi &a, int k) {
    int cnt = 0, need = x;
    vector<bool> vis(x, false);
    for (int v : a) {
        if (v < x && !vis[v]) {
            vis[v] = true;
            need--;
        }
        if (need == 0) {
            cnt++;
            if (cnt >= k) return true;
            vis.assign(x, false);
            need = x;
        }
    }
    return false;
}

int mexx(vi &a, int k) {
    mii freq;
    for (int v : a) freq[v]++;
    int x0 = 0;
    while (freq[x0] >= k) x0++;

    int lo = 0, hi = x0 + 1;
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (can(mid, a, k)) lo = mid + 1;
        else hi = mid;
    }
    return lo - 1;
}

void ok() {
    int n, k; cin >> n >> k;
    vi a(n);
    f(i, 0, n) cin >> a[i];
    pt(mexx(a, k));
}

int32_t main() {
    fastio;
    tc ok();
    return 0;
}
