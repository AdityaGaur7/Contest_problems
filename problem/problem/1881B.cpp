// author - Aditya gaur //
#include<bits/stdc++.h>
using namespace std;
// Macros
#define vecv vector<int>v
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x,y) make_ pair(x,y)
#define vp vector<pair<int,int>>vp
#define sort(a) sort(a.begin(),a.end())
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define all(a) (a.begin()),(a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define print(x) cout<<x<<endl
#define tc  int t;cin>>t;while(t--)
#define it(x) for(auto it:x){ cout<<it<<" "; } cout<<endl
#define ll long long 
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
#define _y cout<<"YES"<<endl
#define _x  cout<<"NO"<<endl
void solve(){
int t;
cin>>t;
while(t--){
   int a,b,c;
   cin>>a>>b>>c;
    int maxi = max(a,b);
    maxi = max (maxi , c);


    int num = 0;
    num = maxi/3;
    cout<<maxi<<" ";
   if(a==b && b==c){
    cout<<num<<" ";
    _y;
   }
   else if (a==b || b==c){
    if(b==num && a==num && )_y;
    
   }else if (c==b || c==a){
    if(c==num)_y;
    
   }
   else if(c!=b && b != a){
    if(num == c || num == a || num == b)
    _y;
   }
  
   



}




}

int main(){
  solve();
    return 0;
 }


   

