#include <bits/stdc++.h>
#include <algorithm> // for lower_bound, upper_bound and sort
#include <iostream>
#include <vector> // for vector
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int num = stoi(s);
    vector<int>v;
    while(num>0){
        int r  = num%10;
        num = num/10;
        v.push_back(r);
    }
reverse(v.begin(),v.end());

auto l = lower_bound(v.begin(),v.end(),1);
auto u = upper_bound(v.begin(),v.end(),0);
  
cout<<l-v.begin()<<u-v.begin();

    }
 return 0;
 
}