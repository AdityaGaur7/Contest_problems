#include <bits/stdc++.h>
using namespace std;

#define vec vector<int> v
#define vpb(x) v.push_back(x)
#define mp(x, y) make_ pair(x, y)
#define F first
#define S second
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))
void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // cout<<f<<" \n";
    int x = v[f - 1];
    sort(v.begin(), v.end(), greater<int>());
    string ans = "";
    // cout<<x<<endl;
    bool d = false;
    // for (auto it : v)
    // {
    //     // cout<<it<<" ";
    // }
    // cout<<x<<"\n";
    for (int i = 0; i < k; i++)
    {

        if (v[i] == x)
        {
            d = true;
            break;
        }

        //   if(v[i]==x && v[i+1]==x && (i+1)>=k){cout<<"MAYBE"<<endl;return;}
        //    if(v[i]==x && v[i+1]!=x ){cout<<"YES"<<endl;return;}
    }
    if (d==true)
    {    
        d = true;
        for (int i = k; i < n; i++)
        {
            if (v[i] == x){
                d = false;
            break;
            }
        }
        if (d)
        {
           ans+="YES";
        }

        else
        {
           ans+="MAYBE";
        }
    }
    else{
        ans+="NO";
    }

    cout<<ans<<endl;
}

    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
    }