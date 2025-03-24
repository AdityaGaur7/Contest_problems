#include<bits/stdc++.h>
using namespace std;

#define vec vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_ pair(x,y)
#define F first
#define S second
#define ok cout<<"YES\n"
#define notok cout<<"NO\n"
#define p(x)  cout<<x<<endl;
#define brk cout<<"\n";
#define loop(n) for(int i=0;i<n;i++)
#define print(v) for(auto it:v)cout<<it<<" ";
#define rvrs(a) reverse(a.begin(),a.end())
#define cin(v,n) for(int i=0;i<n;i++)cin>>v[i]
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define tc  int t;cin>>t;while(t--)
#define ll long long
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
#define lb(arr,target) (lower_bound(arr.begin(),arr.end(),target)-arr.begin())
#define ub(arr,target) (upper_bound(arr.begin(),arr.end(),target)-arr.begin())
vector<ll> printDivisors(ll n) 
{ 
    vector<ll>v;
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) {
                v.push_back(i);
            }
            else {
                v.push_back(i); 
                v.push_back(n/i); 
            }
        } 
    } 
    return v;
}
vector<int> primeFactors(int n) {
    vector<int> v;
    while (n % 2 == 0) {
        v.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            v.push_back(i);
            n = n/i;
        }
    }
    if (n > 2) {
        v.push_back(n);
    }
    return v;
}
vector<ll> SieveOfEratosthenes(ll n) {
    bool prime[n + 1];
    vector<ll>v;
    memset(prime, true, sizeof(prime));
    for (ll p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
    return v;
}
bool isprime(ll n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve() {
    int n;

    cin>>n;
    vector<int> v(n);
    cin(v,n);
    set<int>st;
    for(int i=0;i<n;i++){
        st.insert(v[i]);
    }
    if(st.size()==1)cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(int i=0;i<n-1;i++){
        cout<<"B";
    }
    cout<<"R\n";
    }



}
int main() {
    tc{
        solve();
    }
    return 0;
}