#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;



int main() {

int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int maxi = 0;
int cnt =1;
for(int i=1;i<n;i++){
    if(a[i]>a[i-1]){
        cnt++;
          maxi = max(maxi,cnt);
    }else{
      
        cnt =1 ;
        
        
    }
}
maxi  = max(maxi,cnt);
cout<<maxi <<endl;


return 0;
}