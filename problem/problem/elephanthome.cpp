#include<bits/stdc++.h>
using namespace std;


int main(){
    
   int n;
   cin>>n;
   int res=0; res = n/5;
   if(n%5==0){
      
       cout<<res;
   }else{
       cout<<res+1;
   }
   
return 0;
}



