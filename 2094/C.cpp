////////////////////----------Jai Shree Ram----------////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define ff first
#define ss second
#define print(a) for (auto x : a) cout << x << " "; cout << endl;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pt(x) cout << x << endl;
#define brk cout << "\n";
#define fi(i,a,n) for(int i=a;i<n;i++)
#define all(x) x.begin(),x.end()
#define rev(x) reverse(x.begin(),x.end())
#define sz(x) (int)x.size()
#define tc int t; cin >> t; while (t--)
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'

void f() {
    int n;
    cin >> n;
    vector<vi> a(n, vi(n));
    fi(i, 0, n) fi(j, 0, n) cin >> a[i][j];

    vi p(2 * n + 1);
    unordered_map<int, int> m;
    fi(i, 0, n) fi(j, 0, n) {
        int k = i + j + 2;
        if (!m.count(k)) m[k] = a[i][j];
    }

    fi(i, 2, 2 * n + 1) p[i] = m[i];
    vector<bool> v(2 * n + 1);
    fi(i, 2, 2 * n + 1) v[p[i]] = 1;
    fi(i, 1, 2 * n + 1) if (!v[i]) {
        p[1] = i;
        break;
    }

    fi(i, 1, 2 * n + 1) cout << p[i] << ' ';
    cout << endl;
}

int32_t main() {
    fastio;
    tc f();
    return 0;
}
