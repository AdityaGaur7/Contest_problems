#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0);

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        
        cout << (k + n - 1) / n << "\n"; // Equivalent to ceil(k / n)
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}
