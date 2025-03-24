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
#define yes cout << "YES\n"
#define no cout << "NO\n"
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


struct Friend{
    string name;
    int a,b,c,d,total;
    Friend(string name,int a,int b,int c,int d){
        this->name=name;
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
        total = a+b+c+d;
    }
 
};

bool cmp(const Friend &f1 , const Friend &f2){
    if(f1.total !=f2.total)
    return f1.total > f2.total;
    return f1.name < f2.name;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ok() {
 
    int n;
    cin>>n;


vector<Friend>ans;

for(int i=0;i<n;i++){
    string s;
    cin>>s;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    ans.pb(Friend(s,a,b,c,d));
}
sort(ans.begin(),ans.end(),cmp);


for(auto it:ans){
    cout<<it.name<<" "<<it.total<<" "<<it.a<<" "<<it.b<<" "<<it.c<<" "<<it.d<<endl;
}



}

int32_t main() {
    fastio;
    // tc 
        ok();
    
    return 0;
}