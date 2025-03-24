#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

#define ll long long
const int M = 1e9 + 7;

ll i(ll a, ll m) {
    ll e = m - 2;
    ll r = 1;
    while (e) {
        if (e & 1) r = r * a % m;
        a = a * a % m;
        e >>= 1;
    }
    return r;
}

ll s(const vector<int>& a) {
    int n = a.size();
    if (n < 2) return 0;

    unordered_map<ll, ll> f;
    ll su = 0;
    ll t = n * (n - 1) / 2;
    
    for (int x : a) {
        f[x]++;
    }

    for (const auto& [k1, c1] : f) {
        for (const auto& [k2, c2] : f) {
            if (k1 < k2) {
                su += k1 * k2 * c1 * c2;
            } else if (k1 == k2) {
                su += k1 * k2 * c1 * (c1 - 1) / 2;
            }
        }
    }

    ll p = su;
    ll q = t;
    ll q_inv = i(q, M);

    return p * q_inv % M;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << s(a) << "\n";
    }

    return 0;
}
