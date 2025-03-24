#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>
#define f(n) for(int i=0;i<n;i++)


using namespace std;

int main() {
  
 int t;
 cin>>t;
 while(t--){
     int n,r,count=0;
     vector<int>v;
     cin>>n;
     while(n>0){
         r=n%10;
         n=n/10;
         if(r!=0)
         count++;
         v.push_back(r);
     }
     cout<<count<<endl;
     f(v.size()){
         if(v[i]!=0)
         cout<<v[i]*pow(10,i)<<" ";
     }
     cout<<endl;
 }
    return 0;
}
