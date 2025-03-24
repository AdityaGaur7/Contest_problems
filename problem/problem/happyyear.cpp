#include <bits/stdc++.h>
using namespace std;
int main()
{
   int y,a,b,c,d,t=10;
   cin>>y;
   y=y+1;
   int res = y;
   while(1){
      
       
         y = res;
       a=y%10;
       y=y/10;
        b=y%10;
       y=y/10;
        c=y%10;
       y=y/10;
        d=y%10;
       y=y/10;
       
       if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d){
           cout<<res;
           break;
       }else{
             res = res+1;
       }
     
       
   }
    return 0;
}