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

    int n;
    cin>>n;
 int a[n][n];
 for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
    cin>>a[i][j];
}
 }
set<int>s;
 for(int i=0;i<n;i++){
   for(int j=0;j<n;j++){
  if(i!=j ){
     s.insert(a[i][j]);
  }

}
 }


set<int>ans;

 for(auto x :s){
    ans.insert(x);
    for(int i=2;i<x;i++){
        if(i != x && i | x == x){
            ans.insert(i);
        }
    }
 }
 for(auto x : ans)cout<<x<<" ";
  cout<<endl;
}
}

int main()
{
    solve();
    
    return 0;
}
