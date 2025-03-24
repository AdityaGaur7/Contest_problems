// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define vec(x) vector<int> x
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x, y) make_ pair(x, y)
#define vp vector<pair<int, int>> vp
#define sort(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define print(x) cout << x << endl
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define ll long long
#define mod 1000000007
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower);


bool check(vector<int>&a , int n){
    for(int i = 0;i<n-1;i++){
        if(a[i]>a[i+1])return false;
        
    }
    return true;
}

void solve()
{
int t;
cin>>t;
while(t--){

int n,k;
cin>>n>>k;
vector<int>a;
for(int i=0;i<n;i++){
    int b;
    cin>>b;
    a.push_back(b);
}
  bool  ans = check(a,n);
 if(ans==false && k ==1)cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
}
}

int main()
{
    solve();
    
    return 0;
}
