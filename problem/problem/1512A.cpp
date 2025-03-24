
#include<bits/stdc++.h>
using namespace std;

void solve(){

   int n ;
   cin>>n;
   vector<int> v;
   for(int i =0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);

   }

   unordered_map<int,int>mp;
   for(auto it:v){
    mp[it]++;
   }
   int num = 0;
   for(auto it:mp){
if(it.second == 1)num = it.first;
   }
  auto it = find(v.begin(),v.end(),num)-v.begin();
  

   
  
   
cout<<it+1<<endl;
}

int main(){
   long long t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

