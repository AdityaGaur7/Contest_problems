//////////////////////////////////////DON'T GIVEUP////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////// MACROS /////////////////////////////////////////


#define double long double
#define ll long long
#define v(n) vector<int> v(n)
#define vl(n) vector<long long> v(n)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define p(x) cout << x << endl;
#define brk cout << "\n";
#define l(i,n) for (int i = 0; i < n; i++)
#define pv(v) for (auto it : v) cout << it << " ";
#define f(v) for(auto it:v)
#define cin(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define tc int t; cin >> t; while (t--)
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define sumy(v, x) accumulate(v.begin(), v.end(), x)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))
#define lb(arr, target) (lower_bound(arr.begin(), arr.end(), target) - arr.begin())
#define ub(arr, target) (upper_bound(arr.begin(), arr.end(), target) - arr.begin())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " " << x << endl;
#define PI 3.14159265358979323846
#define endl '\n'
/////////////////////////////////////// MAIN CODE /////////////////////////////
void ok() {
int n;
string s;
cin>>n>>s;
// if(n==1){
//     cout<<"YES\n";
//     return ;
// }
r(i,1,n){
   if(s[i]==s[i-1]){
    cout<<"NO\n";
    return ;
   }
}
cout<<"YES\n";
return;



}

///////////////////////////////////// MAIN FUNCTION //////////////////////////////
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // tc
    ok();
    
    return 0;
}