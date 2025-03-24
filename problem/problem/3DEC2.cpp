// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define vec(x) vector<int> x
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x, y) make_ pair(x, y)
#define vp vector<pair<int, int>> vp
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define print(x) cout << x << endl

#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define ll long long
#define mod 1000000007
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower);



int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n,p,l,t;cin>>n>>p>>l>>t;
        ll c1 = l + 2*t;
        ll cnt=(n+6)/14;
        if(cnt*c1>=p){
            cout << n - ((p + c1 - 1) / c1) << endl;
            continue;
        }
 
        p -= cnt * c1;
        ll ans=cnt;
        if((n + 6)/7 %2 == 1){
            ans++;
            p -=l+t;
        }
 
        if(p < 0){
            cout<<n-ans<<endl;
            continue;
        }
 
        ans += (p+l-1)/l;
        cout<<n-ans<<endl;
        

    }
    return 0;
}