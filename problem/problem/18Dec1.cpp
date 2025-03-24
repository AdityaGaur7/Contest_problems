//----------------> JAI SHREE RAM <------------- //
#include<bits/stdc++.h>
using namespace std;
// Code Shortners
typedef long long ll;
typedef vector<long long int> vl;
typedef pair<int, int> pi;
#define F first
#define S second
#define pb push_back
#define mp make_ pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<endl;
#define REP(i,a,b) for ( int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_bfse::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define mod 1000000007;

int main(){
    int t;
    cin>>t;
    while(t--){
   string s;
   cin>>s;
   int n = s.size();
string a="",b="";
a+=s[0];
 int i=1;
    for(;i<n;i++){
        if(s[i]<=s[i-1]) a +=s[i];
        else break;
    }
    for(;i<n;i++){
        b +=s[i];
    }
    int x = stoi(a);
    int y = stoi(b);
    if(x<y)
    cout<<a<<" "<<b<<endl;
    else cout<<-1<<endl;
    

    }
    return 0;
}