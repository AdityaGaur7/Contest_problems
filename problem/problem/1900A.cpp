#include<bits/stdc++.h>
using namespace std;

// #define vi(x) vector<int>x
// #define vl(x) vector<long>x
// #define vi(x) v.push_back(x)
// #define mp(x,y) make_ pair(x,y)
// #define F first
// #define S second
// #define Pv(v) for(auto it:v)cout<<it<<" ";
// #define Pm(v) for(auto it:v)cout<<it.first<<" "<<it.second;

// #define rev(a) reverse(a.begin(),a.end())
// #define r(i,a,b) for ( int i = a; i< b; i++)
// #define tc  int t;cin>>t;while(t--)
// #define ll long long
// #define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
// #define mod 1000000007
// #define maxi(arr) *max_element(arr.begin(),arr.end())
// #define mini(arr) *min_element(arr.begin(),arr.end())
// #define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
void solve(){

  int n;
  cin>>n;
  string s;
  cin>>s;


int cnt = 0;
 vector<int>v;
  for(int i=0;i<n;i++){
    if(s[i]=='.')cnt++;
     if(cnt>2){
      cout<<2<<endl;
      return ;
    }
    else if(s[i]=='#'){
      
      cnt =0;
    }
   

  }
  cnt = 0;
  int sum = 0;
  for(int i=0;i<n;i++){
if(s[i]=='.')cnt++;
    
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