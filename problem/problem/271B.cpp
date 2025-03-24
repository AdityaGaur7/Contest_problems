#include<bits/stdc++.h>
using namespace std;

#define vec vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_ pair(x,y)
#define F first
#define S second
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
vector<int> SieveOfEratosthenes(int n) {
    bool prime[n + 1];
    vector<int>v;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
            // cout << p << " ";
    return v;
}
bool isprime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
void solve() {

int n,m;
cin>>n>>m;
int a[n][m],b[n][m];
int mx = INT_MIN;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
        mx = max(mx,a[i][j]);
    }
}
vector<int>v;
v = SieveOfEratosthenes(mx+100);

// print(v);

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
       auto it = lb(v,a[i][j]);
         b[i][j] = v[it]-a[i][j];
    
    }
}

int mini  =  INT_MAX;
for(int i=0;i<n;i++){
    int sum = 0;
    for(int j=0;j<m;j++){
      sum+=b[i][j];
    //    cout<< b[i][j]<<" ";
    
    }
    mini = min(mini,sum);
    // cout<<endl;
}


for(int i=0;i<m;i++){
    int sum = 0;
    for(int j=0;j<n;j++){
      sum+=b[j][i];
    //    cout<< b[j][i]<<" ";
    
    }
    mini = min(mini,sum);
    // cout<<endl;
}

cout<<mini<<endl;




}

int main() {
    solve();
    return 0;
}