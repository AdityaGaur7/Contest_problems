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
#define yes cout << "Yes\n"
#define no cout << "No\n"
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ok() {

int n, q;
cin>>n>>q;
vector<tuple<int,int>> a(n);
for(int i=0; i<n; i++) {
    a[i]={0,0};
}
while(q--){
    int x,y;
    cin>>x>>y;
    if(x==1){
        a[y-1]={get<0>(a[y-1])+1,get<1>(a[y-1])};

    }else if(x==2){
        a[y-1]={get<0>(a[y-1]),get<1>(a[y-1])+1};
    }else if(x==3){
       if(get<0>(a[y-1])>1)yes;
       else if(get<1>(a[y-1])>=1)yes;
       
       else no;
    }

}








}

int32_t main() {
    fastio;
    // tc 
        ok();
    
    return 0;
}