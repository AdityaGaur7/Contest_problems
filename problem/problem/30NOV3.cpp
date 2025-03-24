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



void solve()
{
int t;
cin>>t;
while(t--){

int n ;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    int a ;
    cin>>a;
    v.push_back(a);
}
long long sum = 0;
int ind=0;
if(v[n-1]>=0){
    for(int i =0;i<n;i++){
        sum = sum + v[i]*(i+1);
    }
}else{
    int ans = v[n-1];
    for(int i = n-2;i>=0;i--){
      if(ans<0) ans += v[i];
      else {
        ind = i +1;
        break;
      }
    }

    for(int i = 0;i<ind;i++){
        sum+= v[i]*(i+1);
    }
    sum = sum +  (ind+1)*ans;
}
cout<<sum<<" "<<endl;



}
}
int main()
{
    solve();
    
    return 0;
}
