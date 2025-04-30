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

bool check_date(const vi& digits) {
    vi target = {0, 1, 0, 3, 2, 0, 2, 5};
    vi temp = digits;

    sort(all(temp));

    vi date;
    for (int digit : target) {
        auto it = find(all(temp), digit);
        if (it != temp.end()) {
            date.pb(digit);
            temp.erase(it);
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    fastio;
    tc {
        int n;
        cin >> n;

        vi digits(n);
        f(i, 0, n) {
            cin >> digits[i];
        }

        int result = 0;
        f(i, 8, n + 1) {
            vi sub_digits(digits.begin(), digits.begin() + i);
            if (check_date(sub_digits)) {
                result = i;
                break;
            }
        }

        p(result);
    }

    return 0;
}