#include <bits/stdc++.h>
using namespace std;

#define vec vector<int>
#define vpb(x) v.push_back(x)
#define mp(x,y) make_pair(x,y)
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for(int i = a; i < b; i++)
#define tc int t; cin >> t; while(t--)
#define ll long long
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    tc {
        int n;
        cin >> n;
        vec a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];
        
        int m;
        cin >> m;
        multiset<int> d;
        for (int i = 0; i < m; ++i) {
            int x;
            cin >> x;
            d.insert(x);
        }

        bool possible = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] != b[i]) {
                if (d.find(b[i]) != d.end()) {
                    d.erase(d.find(b[i]));
                } else {
                    possible = false;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
