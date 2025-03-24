#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

  
int t;
cin>>t;
while(t--){

int a, b, c ,d;
cin>>a>>b>>c>>d;
 int mx = min(c,d) ;
 int mn =max(a,b);

 if(min(a, b) > max(c, d) || max(a, b) < min(c, d))cout<<"NO"<<endl;
 else cout<<"YES"<<endl;
}
    return 0;

}




