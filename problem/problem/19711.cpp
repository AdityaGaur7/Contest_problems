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
string s;
cin>>s;

unordered_map<char,int>mp;
int n = s.size();

// sort(s.begin(),s.end()); 

for(int i=0;i<n;i++){
    mp[s[i]]++;
}
if(mp.size()==1 || n<=1)cout<<"NO"<<endl;
else{
    // swap(s[0],s[n-1]);
    next_permutation(s.begin(), s.end());
    cout<<"YES\n"<<s<<endl;
}


}

int main(){
 int t;
    cin>>t;
    while(t--){
  solve();

    }
 }