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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        // for (int i = a; i <= b; i++)
        // {
        //     for (int j = b; j <= c; j++)
        //     {
        //         for (int k = c; k <= d; k++)
        //         {
        //             if(i+j>k && i+k>j && k+j>i){
        //                 cout<<i<<" "<<j<<" "<<k;
        //                 break;
        //             }
        //         }
        //     }
        // }
        cout<<b<<" "<<c<<" "<<c<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
