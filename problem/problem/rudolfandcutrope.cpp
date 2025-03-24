#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
      int n,count=0;
      cin>>n;
      vector<pair<int,int>>v;
      for(int i=0;i<n;i++){
          int a,b;
          cin>>a>>b;
          v.push_back({a,b});
      }
      for(int i=0;i<n;i++){
          if((v[i].first - v[i].second )<=0)count++;
      }
      cout<<n-count<<endl;
      
  }
    return 0;
}