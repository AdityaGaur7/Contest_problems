#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tc int t; cin >> t; while (t--)
#define vi vector<int>
#define p(x) cout << x << '\n'

bool solve(int n, string &a, string &b) {
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if ((i % 2 == 0 && a[i] == '1') || (i % 2 == 1 && b[i] == '1')) c1++;
        if ((i % 2 == 1 && a[i] == '1') || (i % 2 == 0 && b[i] == '1')) c2++;
    }
    return (c1 <= n / 2 && c2 <= (n + 1) / 2);
}

int main() {
    fastio;
    tc {
        int n; cin >> n;
        string a, b; cin >> a >> b;
        cout<<(solve(n, a, b) ? "YES" : "NO")<<endl;
    }
}
