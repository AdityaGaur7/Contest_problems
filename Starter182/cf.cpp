#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

#define ll long long
#define dl long double
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define pb push_back
#define mp make_pair
#define mii map<int, int>
#define mll map<ll, ll>
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
#define mod 1000000007
#define endl '\n'
#define sumy(v, x) accumulate(v.begin(), v.end(), x)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))
#define lb(arr, target) (lower_bound(arr.begin(), arr.end(), target) - arr.begin())
#define ub(arr, target) (upper_bound(arr.begin(), arr.end(), target) - arr.begin())
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define PI 3.14159265358979323846

using namespace std;

bool ck(const vi& di) {
    vi ta = {0, 1, 0, 3, 2, 0, 2, 5};
    vi te = di;

    sort(all(te));

    vi da;
    for (int dg : ta) {
        auto it = find(all(te), dg);
        if (it != te.end()) {
            da.pb(dg);
            te.erase(it);
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    fastio;
    tc {
        int nn;
        cin >> nn;

        vi di(nn);
        f(i, 0, nn) {
            cin >> di[i];
        }

        int re = 0;
        f(i, 8, nn + 1) {
            vi su(di.begin(), di.begin() + i);
            if (ck(su)) {
                re = i;
                break;
            }
        }

        p(re);
    }

    return 0;
}