////////////////////----------Jai Shree Ram----------////////////////////
#include <bits/stdc++.h>
using namespace std;


#define ll long long
#define dl long double
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<int,int>>
#define vpl vector<pair<ll,ll>>
#define pb push_back
#define mp make_pair
#define mii map<int,int>
#define mll map<ll,ll>
#define ff first
#define ss second
#define print(a) for(auto it:a)cout<<it<<" ";cout<<endl;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pt(x) cout << x << endl;
#define brk cout << "\n";
#define fi(i, a, n) for (int i = a; i < n; i++)
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
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define endl '\n'

void run_case()
{
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    s.insert(s.begin(), ' ');
    t.insert(t.begin(), ' ');

    vector<int> moves;

    for (int idx = n; idx >= 2; --idx)
    {
        if (s[idx] == t[idx])
            continue;

        int pos = -1;
        for (int j = idx - 1; j >= 1; --j)
            if (s[j] == '1')
            {
                pos = j;
                break;
            }

        if (pos == -1)
        {
            cout << -1 << endl;
            return;
        }

        for (int j = pos; j < idx - 1; ++j)
        {
            moves.pb(j);
            s[j + 1] ^= 1;
        }
        moves.pb(idx - 1);
        s[idx] ^= 1;
    }

    if (s[1] != t[1])
    {
        cout << -1 << endl;
        return;
    }

    cout << (int)moves.size() << endl;
    for (int i = 0; i < (int)moves.size(); ++i)
    {
        cout << moves[i];
        if (i + 1 < (int)moves.size())
            cout << ' ';
        else
            cout << '\n';
    }
}

int32_t main()
{
    fastio;
    tc { run_case(); }
    return 0;
}
