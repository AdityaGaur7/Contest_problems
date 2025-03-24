#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>
#define f(n) for(int i=0;i<n;i++)
#define v vector<int>v

using namespace std;

int main() {
  
  int a[3];
  f(3){
      cin>>a[i];
  }
  sort(a,a+3);
  int sum=0;
  f(3){
      sum=sum+a[i];
  }
  if((a[0]+a[2])/2!=a[1]) cout<<a[2]-a[0];
  else {
      int d = (a[2]-a[0]);
      cout<<d;
  }
  
  
    return 0;
}
