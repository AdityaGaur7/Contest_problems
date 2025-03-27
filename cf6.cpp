#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tc int t; cin >> t; while (t--)
#define p(x) cout << x << endl;

void solve() {
    tc {
        int s, k;
        cin >> s >> k;
        int r = s % k;
        int ans = (r % 2 == 0) ? k - r / 2 : k - r / 2 - 1;
        p(max(1, ans));
    }
}

int main() {
    fastio;
    solve();
    return 0;
}
