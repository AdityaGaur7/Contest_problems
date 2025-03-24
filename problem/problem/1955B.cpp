#include<bits/stdc++.h>
using namespace std;

#define v vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_pair(x,y)
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define tc  int t;cin>>t;while(t--)
#define ll long long
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define mx(arr) *max_element(arr.begin(),arr.end())
#define mn(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))

void solve() {
    int n, c, d;
    cin >> n >> c >> d;

    int mn = INT_MAX;
    map<int, int> m;
    r(i,0,n*n) {
        int a;
        cin >> a;
        mn = min(mn, a);
        m[a]++;
    }

    int f = mn, r;
    r(i,0,n) {
        f = mn + i * c;
        r = f;
        if (!m[r]) {
            cout << "NO\n";
            return;
        }
        r(j,0,n) {
            r = f + j * d;
            if (!m[r]) {
                cout << "NO\n";
                return;
            }
            m[r]--;
        }
    }

    cout << "YES\n";
}

int main() {
    tc {
        solve();
    }
    return 0;
}
