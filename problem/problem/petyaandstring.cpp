#include<bits/stdc++.h>
using namespace std;

int func(string s1,string s2){


int l = s1.length();
for(int i=0;i<l;i++){
  if(isupper(s1[i]) ) {
    s1[i]=s1[i]+32;
  }
  if(isupper(s2[i])){
    s2[i]=s2[i]+32;
  }
}
int count =0;
for(int i=0;i<l;i++){
if(s1[i]==s2[i])count++;
else if(s1[i]>s2[i])return 1;
else if(s1[i]<s2[i]) return -1;
}
if(count==l){
    return 0;
}

};
int main(){

string s1,s2;
cin>>s1>>s2;

int b = func(s1,s2);

cout<<b;


return 0;
}



