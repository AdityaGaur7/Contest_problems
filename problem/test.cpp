#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define ll long long
#define pb push_back
#define sz(x) (int)x.size()

bool is_balanced(ll k, vector<ll>& b, int n, ll x) {
    ll lo = b[0] - k, hi = b[0] + k;
    for (int i = 1; i < n; i++) {
        ll cl = max(b[i] - k, lo);
        ll ch = min(b[i] + k, hi + x);
        if (cl > ch) return false;
        lo = cl;
        hi = ch;
    }
    return true;
}

ll find_min_cost(vector<ll>& b, int n, ll x) {
    ll lo = 0, hi = 2e9, ans = hi;
    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (is_balanced(mid, b, n, x)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

vector<ll> generate_balanced_contest(vector<ll>& b, int n, ll x, ll ans) {
    vector<ll> c(n);
    c[0] = max(b[0] - ans, b[0] + ans);
    c[0] = min(c[0], b[0] + ans);

    for (int i = 1; i < n; i++) {
        ll lo = max(c[i - 1], b[i] - ans);
        ll hi = min(c[i - 1] + x, b[i] + ans);
        c[i] = hi;
    }
    return c;
}

ll calculate_max_cost(vector<ll>& b, vector<ll>& c, int n) {
    ll max_diff = 0;
    for (int i = 0; i < n; i++) {
        max_diff = max(max_diff, abs(c[i] - b[i]));
    }
    return max_diff;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<ll> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        ll min_cost = find_min_cost(b, n, x);
        vector<ll> c = generate_balanced_contest(b, n, x, min_cost);
        ll max_diff = calculate_max_cost(b, c, n);

        cout << max_diff << "\n";
        for (int i = 0; i < n; i++) {
            cout << c[i] << (i < n - 1 ? ' ' : '\n');
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
