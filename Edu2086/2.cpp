#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FAST_IO                  \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define dl long double
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define mii map<int, int>
#define mll map<ll, ll>
#define ff first
#define ss second
#define print(a)           \
    for (auto it : a)      \
        cout << it << " "; \
    cout << endl;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define brk cout << "\n";
#define f(i, a, n) for (int i = a; i < n; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rev(x) reverse(x.begin(), x.end())
#define sz(x) (int)x.size()
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
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
int count_leq(vector<int> &p, int n, int v)
{
    int l = 0, h = n;
    while (l < h)
    {
        int m = l + (h - l) / 2;
        if (p[m] <= v)
            l = m + 1;
        else
            h = m;
    }
    return l;
}

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + a[i - 1];
    }
    int s = p[n - 1] + a[n - 1];

    if (k * s < x)
    {
        cout << "0\n";
        return;
    }

    int t = k * s - x, ans = 0;
    for (int i = 0; i < k; i++)
    {
        int lim = t - i * s;
        if (lim < 0)
            break;
        ans += count_leq(p, n, lim);
    }

    cout << ans << "\n";
}

int32_t main()
{
    FAST_IO;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
