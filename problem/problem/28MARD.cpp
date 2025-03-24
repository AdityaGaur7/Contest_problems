#include <bits/stdc++.h>
using namespace std;
#define v(x) vector<int> x
#define a(x) v.push_back(x)
#define s(x) (int)x.size()
#define p(x, y) make_pair(x, y)
#define vp vector<pair<int, int>> vp
#define sr(x) sort(x.begin(), x.end())
#define l(i, a, b) for (int i = a; i <= b; i++)
#define pr(x) cout << x << endl
#define t    \
    int t;    \
    cin >> t; \
    while (t--)
#define mx(arr) *max_element(arr.begin(), arr.end())
#define mn(arr) *min_element(arr.begin(), arr.end())
#define ll long long
#define m 1000000007

void solve()
{
    v(x) = {1, 10, 11, 100, 101, 110, 111, 121, 1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111, 1210, 1221, 1331, 10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111, 10201, 11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111, 11121, 11211, 12100, 12111, 12210, 12221, 12321, 13310, 13431, 14641, 100000};
    int n;
    cin >> n;
    bool c = false;
    for (auto d : x)
    {
        if (n == d)
        {
            c = true;
            break;
        }
    }
    if (c)
    {
        pr("YES");
    }
    else
    {
        pr("NO");
    }
}

int main()
{
    t
    {
        solve();
    }
    return 0;
}
