#include<bits/stdc++.h>
using namespace std;

#define vint(v) vector<int>v
#define push(v,x) v.push_back(x)
#define mp(x,y) make_pair(x,y)
#define F first
#define S second
#define loop(n) for(int i=0;i<n;i++)
#define print(v) for(auto it:v)cout<<it<<" ";
#define rvrs(a) reverse(a.begin(),a.end())
#define cin(v,n) for(int i=0;i<n;i++)cin>>v[i]
#define tc  int t;cin>>t;while(t--)
#define ll long long
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define upr transform(s.begin(), s.end(), s.begin(), ::toupper)

#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
#define lb(arr,target) (lower_bound(arr.begin(),arr.end(),target)-arr.begin())
#define ub(arr,target) (upper_bound(arr.begin(),arr.end(),target)-arr.begin())
void SieveOfEratosthenes(int n)
{
      bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
 
bool isprime(int n) 
{ 
    
    if (n <= 1) 
        return false; 
  
    for (int i = 2; i <= sqrt(n); i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
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
void solve(){
int n;
cin>>n;
vector<int> v(n),a(n);

for(int i=0;i<n;i++)v[i]=i+2;


fill(a.begin(), a.end(), 1);


loop(n){
if(!isprime(v[i])){
    a[i]=2;
    
}

}
if(n>2)
cout<<2<<endl;
else cout<<1<<endl;
print(a);





}

int main(){
//  int t;
//     cin>>t;
    // while(t--){
  solve();

    // }
 }