#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define pb push_back

int compute_operations(vector<int> &a, vector<int> &b, int n)
{
    int sm = 0;
    vector<int> d;

    for (int i = 0; i < n; i++)
    {
        int d1 = min(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
        int d2 = max(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
        sm += d1;
        if (d1 != d2)
            d.pb(d2 - d1);
    }

    return sm;
}

bool is_possible(int k, int sm, vector<int> &d)
{
    int e = k - sm;
    if (e < 0)
        return false;
    if (e % 2 == 0 || (!d.empty() && *min_element(all(d)) <= e))
        return true;
    return false;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);

    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;

    int sm = compute_operations(a, b, n);
    vector<int> d;

    for (int i = 0; i < n; i++)
    {
        int d1 = min(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
        int d2 = max(abs(a[i] - b[i]), 9 - abs(a[i] - b[i]));
        if (d1 != d2)
            d.pb(d2 - d1);
    }

    cout << (is_possible(k, sm, d) ? "Yes\n" : "No\n");
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
