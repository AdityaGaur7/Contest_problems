#include<bits/stdc++.h>
using namespace std;




bool check(long long n){
	long long rem = n%10;
	if( n%3 == 0 || rem == 3)return true;
	return false;
}


int main(){
	#ifndef ONLINE_JUDGE

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

  
int t;
cin>>t;
while(t--){
int n;
cin>>n;
 
vector<long long>v;
for(long long i =1 ; i<=3000;i++){

bool ans  = check(i);
if(!ans) v.push_back(i);

    
}
// for(auto it:v){
// 	cout<<it<<" ";
// }
cout<<v[n-1]<<endl;
}

return 0;

}




