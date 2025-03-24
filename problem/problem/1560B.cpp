
#include<bits/stdc++.h>
using namespace std;

void solve(){

   int a, b, c;
   cin>>a>>b>>c;
   int r = abs(a-b);
int  n = 2*r;
if(a>n || b > n || c > n)cout<<"-1\n";
else {


   if(c+r<=n)cout<<c+r<<endl;
   else if(c-r>0 && c-r<=n) cout<<c-r<<endl;
  else cout<<"-1"<<endl;
}

}

int main(){
   long long t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

