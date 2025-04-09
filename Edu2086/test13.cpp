#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define tc int t; cin >> t; while (t--)
#define yes cout << "Yes\n"
#define no cout << "No\n"

int g(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

void solve() {
    int n; cin >> n;
    vi a(n);
    for (auto &x : a) cin >> x;

    int m = *min_element(all(a)), cnt = count(all(a), m);
    vi q, f;
    for (auto x : a) {
        if (x % m == 0) {
            q.push_back(x / m);
            f.push_back(x == m);
        }
    }

    int d = q.size();
    if (d < 2) { no; return; }

    int gg = q[0];
    for (int i = 1; i < d; i++) gg = g(gg, q[i]);
    if (gg != 1) { no; return; }

    vi pre(d), suf(d);
    pre[0] = q[0];
    for (int i = 1; i < d; i++) pre[i] = g(pre[i - 1], q[i]);
    suf[d - 1] = q[d - 1];
    for (int i = d - 2; i >= 0; i--) suf[i] = g(suf[i + 1], q[i]);

    for (int i = 0; i < d; i++) {
        if (f[i]) {
            int h = 0;
            if (i > 0) h = pre[i - 1];
            if (i < d - 1) h = (h == 0) ? suf[i + 1] : g(h, suf[i + 1]);
            if (h == 1) { yes; return; }
        }
    }
    no;
}

int32_t main() {
    ios::sync_with_stdio(false); cin.tie(0);
    tc solve();
    return 0;
}
