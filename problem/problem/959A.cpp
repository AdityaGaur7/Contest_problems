// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define vecv vector<int> v
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x, y) make_ pair(x, y)
#define vp vector<pair<int, int>> vp
#define sort(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define print(x) cout << x << endl
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define ll long long
#define mod 1000000007

void solve()
{

    tc
    {
        int n, x;
        cin >> n >> x;
        if (n <= 1)
            cout << 1 << endl;
        else
        {
            n = n - 2;
            int res = ceil(1.0*n/x)+1;
            cout<<res<<endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
