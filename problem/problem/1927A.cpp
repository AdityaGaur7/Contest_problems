
#include<bits/stdc++.h>
using namespace std;

#define v vector<int>v
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

ll t;
cin>>t;
while(t--){
   
int n;cin>>n;
   string s;
   cin>>s;

   int st = 0, e = 0;
   bool f = false;

   for(int i=0;i<n;i++){
 if(f==false && s[i]=='B'){
    st = i;f =true;
 }
 if(s[i]=='B')e = i;
   }

   cout<<e-st+1<<endl;
  
   


}  
}

int main(){
  solve();
    return 0;
 }


   

