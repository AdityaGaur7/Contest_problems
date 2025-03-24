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
    string s;
    cin>>s;
     int se=0;
    int cnt = 4,n= s.size();


int a[n];

    for(int i=0;i<n;i++){
        a[i]= s[i]-'0';
        if(a[i]==0)a[i]=10;
    }
    int st = abs(1-a[0]);
    for(int i=0;i<n-1;i++){
       st = st + abs(a[i]-a[i+1]);
    }
    cout<<st+4<<endl;

   
   
   
    // int st = (s[0]-'0');
    // if(s[0]=='0')st = 9;
    // int sum = abs(1-st);
    // for(int i=0;i<n-1;i++){
    //     if(s[i]=='0')
    //     se = (s[i]-'0')-(s[i+1]-'0') ;
    //     sum = sum + abs(se) ;
    // }
    // cout<<sum +4<<endl;
}

}

int main(){
  solve();
    return 0;
 }


   

