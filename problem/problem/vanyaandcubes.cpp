#include <bits/stdc++.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   int h=0,cnt=0;
   while(cnt<=n){
       h++;
       cnt = cnt + h*(h+1)/2;
   }
   cout<<h-1;
 return 0;
 
}