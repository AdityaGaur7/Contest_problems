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
#define mod 1000000007

void solve(){
    tc{
        int n , m ;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int step=0;
        for(int i =0;i<m;i++){
            if(a[n-1][i]=='D'){
              
                step++;
            }
            
        }
         for(int i =0;i<n;i++){
            if(a[i][m-1]=='R')step++;
        }

        cout<<step<<endl;

    }
}
int main(){
  solve();
    return 0;
}