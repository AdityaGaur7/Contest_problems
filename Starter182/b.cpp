////////////////////----------Jai Shree Ram----------////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pq priority_queue
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tc int t; cin >> t; while(t--)

int32_t main() {
    fastio;
    tc {
        int n, k, d;
        cin >> n >> k >> d;
        vi t(n);
        for (auto &x : t) cin >> x;

        pq<pii, vector<pii>, greater<>> a; 
        pq<pii, vector<pii>, greater<>> b; 

        for (int i = 0; i < n; i++) a.push({t[i], i});

        int cnt = 0;
        vector<int> day(n, 0); 
        for (int cur = 1; cur <= d; cur++) {
            while (!b.empty() && b.top().fi == cur) {
                int i = b.top().se;
                b.pop();
                a.push({t[i], i});
            }

            int can = (int)a.size() - k;
            while (can-- > 0 && !a.empty()) {
                int i = a.top().se;
                a.pop();
                b.push({cur + t[i], i});
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
    return 0;
}
