
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
    int n;cin>>n;
string s,r;
cin>>s>>r;

int p = 0;

for(int i= 0;i<n;i++){
    if(r[i]-'0'==1)p++;
}

 s = '0'+s ;
 s = s +'0';
 r = '0'+r;
 r = r + '0';
//  cout<<s<<" ";
 int x = 0;
for(int i=1;i<n;i++){
  if(r[i]=='1' && s[i]=='1' && s[i-1]=='0' && s[i+1]=='0')x++;
}

// int t =p - x;
if(x>0)cout<<p-x<<endl;
else cout<<0<<endl;

}

int main(){
   ll t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

