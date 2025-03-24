#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   int count =0,r=0;
   while(n>0){
       r=n%10;
       n=n/10;
       count++;
   }
   int sum = 0;
   for(int i = 1;i<=count;i++){
       sum = sum + i;
   }
   cout<< (r-1)*10 + sum <<endl;
   
    }
 return 0;
 
}