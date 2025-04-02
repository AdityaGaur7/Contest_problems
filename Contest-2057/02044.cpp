#include <bits/stdc++.h>
using namespace std;

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
#define sz(x) (int)x.size()
#define tc int t; cin >> t; while (t--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define sumy(v, x) accumulate(v.begin(), v.end(), x)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))
#define lb(arr, target) (lower_bound(arr.begin(), arr.end(), target) - arr.begin())
#define ub(arr, target) (upper_bound(arr.begin(), arr.end(), target) - arr.begin())
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define PI 3.14159265358979323846
#define f(i, a, b) for (int i = a; i < b; i++)
#define r(i, a, b) for (int i = a; i >= b; i--)
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

void gen(string &s, int n) {
    f(i, 0, n) s += (i % 2 == 0) ? 'A' : 'B';
}

void mod(string &t, int n, int d) {
    int c = 0;
    f(i, 0, n) {
        if (i % 2 == 0 && c < d) t[i] = 'C', c++;
    }
}

void solve() {
    int n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << "A\n" << (k == 1 ? "A\n" : "C\n");
        return;
    }
    if (k < n / 2 || k > n) {
        cout << "-1\n";
        return;
    }
    string s = "", t;
    gen(s, n);
    t = s;
    mod(t, n, n - k);
    cout << s << "\n" << t << "\n";
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
