
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

   int n,m,k;
   cin>>n>>m>>k;
   map<int,int>m1,m2;

   for(int i =0;i<n;i++){
    int a;
   cin>>a;
  m1[a]++;
    
   }

 for(int i =0;i<m;i++){
    int a;
   cin>>a;
   m2[a]++;
    
   }
  
 int x =0 , y = 0;
 for(int i = 1 ; i<= k;i++){
   if(m1[i]>0 && m2[i]>0){
      x++;y++;
   }else if(m1[i]>0)x++;
   else if (m2[i]>0)y++;
   else {
      cout<<"NO\n";return ;
   }
 }

 if((x>=(k/2) )&& (y>=(k/2)))cout<<"YES\n";
 else cout<<"NO\n";


   



}

int main(){
   ll t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

