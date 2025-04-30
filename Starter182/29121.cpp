#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tc int t; cin >> t; while (t--)
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define maxi(a) *max_element(all(a))
#define mini(a) *min_element(all(a))
#define p(x) cout << x << endl

int maxPleasure(vi &a) {
    return maxi(a) - mini(a);
}

int main() {
    fastio;
    tc {
        int n; cin >> n;
        vi a(n);
        for (int &x : a) cin >> x;
        p(maxPleasure(a));
    }
}
