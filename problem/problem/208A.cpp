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

void solve(){

//    char c[200];
string c;
   cin>>c;
//    char s = "WUB";
   string s = "WUB";

  
 size_t ind = c.find(s); 
    while(ind !=string::npos){
     ind = c.find(s); 
    if(ind !=string::npos){
       
        c.erase(ind,s.length()); 
       c.insert(ind," ");
    }
    }
    for(int i = 0 ; i<c.length();i++){
        if(c[i]==' ' && c[i+1]==' ')c.erase(i,1);
    }
    cout<<c;

}
int main(){
  solve();
    return 0;
}