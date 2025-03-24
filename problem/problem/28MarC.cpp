// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define v(x) vector<int> x
#define vb(x) v.push_back(x)
#define l(s) (int)s.size()
#define p(x, y) make_pair(x, y)
#define vp vector<pair<int, int>> vp
#define s(a) sort(a.begin(), a.end())
#define r(a, b, c) for (int i = b; i < c; i++)
#define pr(x) cout << x << endl
#define t    \
    int t;    \
    cin >> t; \
    while (t--)
#define mx(arr) *max_element(arr.begin(), arr.end())
#define mn(arr) *min_element(arr.begin(), arr.end())
#define ll long long

#define lw transform(s.begin(), s.end(), s.begin(), ::tolower);

void solv()
{
    string s;
    cin >> s;
    int h = stoi(s.substr(0, 2));
    string m = s.substr(3, 2);
    string sh = " AM";
    if (h > 11)
        sh = " PM";
    if (h == 0 || h == 12)
        pr(12 << ":" << m << sh);
    else
    {
        if (h % 12 < 10)
        {
            pr(0 << h % 12 << ":" << m << sh);
        }
        else
            pr(h % 12 << ":" << m << sh);
    }
}

int main()
{
    t
    {
        solv();
    }
    return 0;
}
