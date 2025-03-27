#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long

ll solve(vector<ll>& c, ll t, ll x, ll y) {
    ll res = 1e18;
    int p = lower_bound(c.begin(), c.end(), x) - c.begin();
    
    if (p < c.size()) {
        ll s = t - c[p];
        res = min(res, max(0LL, y - s));
    }
    if (p > 0) {
        ll s = t - c[p - 1];
        res = min(res, (x - c[p - 1]) + max(0LL, y - s));
    }
    return res;
}

void process() {
    int n;
    cin >> n;
    vector<ll> c(n);
    ll t = 0;

    for (ll &v : c) {
        cin >> v;
        t += v;
    }

    sort(c.begin(), c.end());

    int q;
    cin >> q;
    while (q--) {
        ll x, y;
        cin >> x >> y;
        cout << solve(c, t, x, y) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) process();

    return 0;
}
