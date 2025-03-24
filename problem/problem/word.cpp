#include<bits/stdc++.h>
using namespace std;


int main(){
    
   string s;
   cin>>s;
   int n = s.length();
   int l=0,u=0;
   for(int i=0;i<n;i++){
       if(isupper(s[i]))u++;
       else l++;
   }
   if(l>=u){
       for(int i=0;i<n;i++){
           if(isupper(s[i])){
               s[i]=s[i]+32;
           }
       }
   }
       else{
           for(int i=0;i<n;i++){
           if(islower(s[i])){
               s[i]=s[i]-32;
           }
       }
    
   }
      cout<<s;
return 0;
}



