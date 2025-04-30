////////////////////----------Jai Shree Ram----------////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define print(a)           \
    for (auto it : a)      \
        cout << it << " "; \
    cout << endl;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pt(x) cout << x << endl;
#define brk cout << "\n";
#define fi(i, a, n) for (int i = a; i < n; i++)
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

void solve()
{
    int n;
    cin >> n;
    vl a(n);
    fi(i, 0, n) cin >> a[i];
    
    vl pre(n + 1, 0);
    fi(i, 0, n) pre[i + 1] = pre[i] + a[i];
    
    vl pre_max(n, LLONG_MIN);
    pre_max[0] = a[0];
    fi(i, 1, n) pre_max[i] = max(pre_max[i-1], a[i]);
    
    vl ans(n);
    fi(k, 1, n + 1)
    {
        ll base_sum = pre[n] - pre[n-k];
        ll res = base_sum;
        if (n-k > 0)
        {
            ll max_before = pre_max[n-k-1];
            ll adjust = max_before - a[n-k];
            if (adjust > 0) res += adjust;
        }
        ans[k-1] = res;
    }
    
    print(ans);
}

int32_t main()
{
    fastio;
    tc
    {
        solve();
    }
    return 0;
}
