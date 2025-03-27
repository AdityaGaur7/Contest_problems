#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define p(x) cout << x << endl;
#define f(i, a, n) for (int i = a; i < n; i++)
#define all(x) x.begin(), x.end()
#define rev(x) reverse(x.begin(), x.end())
#define sz(x) (int)x.size()
#define tc int t; cin >> t; while (t--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void s()
{
    int n, x;
    cin >> n >> x;
    vi a(n);
    f(i, 0, n) cin >> a[i];

    sort(all(a), greater<int>()); 

    int ans = 0, cnt = 0;
    f(i, 0, n)
    {
        cnt++;  
        if (cnt * a[i] >= x) 
        {
            ans++;  
            cnt = 0;  
        }
    }
    p(ans);
}

int main()
{
    fastio;
    tc { s(); }
    return 0;
}
