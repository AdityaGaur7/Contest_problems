#include<bits/stdc++.h>
using namespace std;


int main(){
    
 string s;
 int count = 0;
 cin>>s;
 int n = s.length();
 for(int i=0;i<n;i++){
     if(s[i]=='4' || s[i]=='7')count ++;
 }
 if(count == 7 || count == 4)cout<<"Yes";
 else cout;
return 0;
}



