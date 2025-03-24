#include<bits/stdc++.h>
using namespace std;

#define vec vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_ pair(x,y)
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define tc  int t;cin>>t;while(t--)
#define ll long long
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
void solve(){

int n,m;
cin>>n>>m;
string s, t;
cin>>s>>t;
int i =0,j=0;
int cnt =0;

while(i<n && j<m){
   if(s[i]==t[j]){
    cnt++;
    i++;
   }
    j++;
   
}
cout<<cnt<<endl;

}

int main(){
 int t;
    cin>>t;
    while(t--){
  solve();

    }
 }