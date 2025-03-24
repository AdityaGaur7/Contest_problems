#include<bits/stdc++.h>
using namespace std;


int main(){
string s,s1;
cin>>s>>s1;


int n = s.length();

int i=0,j=n-1;
while(i<=j){
    swap(s[i],s[j]);
    i++;j--;
}
if(s==s1)cout<<"YES";
else cout<<"NO";
return 0;
}



