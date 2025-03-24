
#include<bits/stdc++.h>
using namespace std;

void solve(){

   int n;
   cin>>n;
   int a[n];
   vector<int>vec;
   for(int i= 0;i<n;i++){
    cin>>a[i];

   }
   for(int i =0;i<n-1;i++){
if(a[i]!=a[i+1]){
    vec.push_back(i);

}
   }
   int q;
   cin>>q;
   while(q--){
    long long l , r;
    cin>>l>>r;
    l--;r--;
    long long lb = lower_bound(vec.begin(),vec.end(),l)-vec.begin();
    if(lb<vec.size() && vec[lb]<r){
        cout<<vec[lb]+1<<" "<<vec[lb]+2<<"\n";
    }else{
        cout<<"-1 -1\n";
    }
   }
   cout<<endl;
  
  

}

int main(){
   long long t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

