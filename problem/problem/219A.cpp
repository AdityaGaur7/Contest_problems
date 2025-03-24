#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

  int k;
  cin>>k;
  string s;
  cin>>s;
 
int  n = s.length();
int a[1000]={0};

for(int i =0;i<n;i++){
    a[s[i]-'a']++;
}

for(int i = 0;i<n;i++){
   if(a[i]%k!=0){
    cout<<-1<<endl;
   return 0;
   }
}

return 0;
  
}