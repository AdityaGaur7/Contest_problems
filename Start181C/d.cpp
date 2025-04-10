#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define all(x) x.begin(), x.end()
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    vvi A(n, vi(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];

    int ans = LLONG_MAX;
    vector<int> dx = {1, 1, -1, -1};
    vector<int> dy = {1, -1, 1, -1};

    for (int d = 0; d < 4; ++d) {
        map<int, int> freq;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) {
                int k = A[i][j] - i * dx[d] - j * dy[d];
                freq[k]++;
            }

        int max_freq = 0;
        for (auto& it : freq) {
            max_freq = max(max_freq, it.second);
        }
        ans = min(ans, n * m - max_freq);
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
