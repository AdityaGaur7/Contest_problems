#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define p(x) cout << x << "\n";
#define f(i, a, n) for (int i = a; i < n; i++)
#define ll long long
#define dl long double
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<int,int>>
#define vpl vector<pair<ll,ll>>
#define pb push_back
#define mp make_pair
#define mii map<int,int>
#define mll map<ll,ll>
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define p(x) cout << x << endl;
#define brk cout << "\n";
#define f(i, a, n) for (int i = a; i < n; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rev(x) reverse(x.begin(), x.end())
int solve(vi a) {
    int n = a.size();
    if (n == 1) {
        return a[0];
    }
    int k = (n - 1) / 2;
    int m = *max_element(a.begin(), a.end());
    bool h = false;
    f(i, 0, n) {
        if (i % 2 == 0 && a[i] == m) {
            h = true;
            break;
        }
    }
    int b;
    if (h) {
        b = k;
    } else {
        b = (k - 1 >= 0) ? k - 1 : 0;
    }
    return m + b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vi r;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        f(i, 0, n) {
            cin >> a[i];
        }
        r.push_back(solve(a));
    }
    f(i, 0, r.size()) {
        p(r[i]);
    }
    return 0;
}