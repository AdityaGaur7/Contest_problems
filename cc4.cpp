#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define pb push_back


vector<int> left_reach(vector<int> &h, int n) {
    vector<int> l(n);
    for (int i = 1; i < n; i++) {
        if (i == 1 || (h[i] - h[i - 1]) != (h[i - 1] - h[i - 2])) l[i] = i - 1;
        else l[i] = l[i - 1];
    }
    return l;
}


vector<int> right_reach(vector<int> &h, int n) {
    vector<int> r(n);
    r[n - 1] = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (i == n - 2 || (h[i + 1] - h[i]) != (h[i + 2] - h[i + 1])) r[i] = i + 1;
        else r[i] = r[i + 1];
    }
    return r;
}


int lower_bound(vector<pair<int, int>> &p, int key) {
    int lo = 0, hi = p.size();
    while (lo < hi) {
        int mid = (lo + hi) / 2;
        if (p[mid].first > key) hi = mid;
        else lo = mid + 1;
    }
    return lo;
}


int count_friends(int n, vector<int> &h) {
    vector<int> l = left_reach(h, n), r = right_reach(h, n);
    vector<pair<int, int>> p(n);
    
    for (int i = 0; i < n; i++) p[i] = {l[i], r[i]};
    sort(all(p));

    int ni = 0;
    for (int i = 0; i < n; i++) ni += (n - lower_bound(p, p[i].second));

    return (n * (n - 1) / 2) - ni;
}


void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int &x : h) cin >> x;
    cout << count_friends(n, h) << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
