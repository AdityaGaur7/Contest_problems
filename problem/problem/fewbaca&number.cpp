#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
   vector<int>v;
   long long n,i=0,mini=INT_MAX;
   cin>>n;
   while(n>0){
   long long r = 0;
   
   r=n%10;
   
   n=n/10;
   
   v.push_back(r);
  
//   if(r<mini)mini=r;
       
   }
//   sort(v.begin(),v.end(),greater<int>());
   for(int i=0;i<v.size();i++){
       
       if(v[i]>4 ){
           
           
           v[i]=9-v[i];
        //   if(v[0]==0)v[0]=9;
       } 
       
       
   }
  
   reverse(v.begin(),v.end());
    if(v[0]==0)v[0]=9;
   for(int i=0;i<v.size();i++){
       cout<<v[i];
   }

   
    return 0;
}
