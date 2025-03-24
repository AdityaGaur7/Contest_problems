#include <bits/stdc++.h>
using namespace std;


int main(){
    
    int n,count=0;
   
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
         int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    for(int i=0;i<n;i++){
        if((v[i].second-v[i].first)>1)count++;
        
    }
    cout<<count;
    

  
  
    return 0;
}