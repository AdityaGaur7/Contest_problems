#include<bits/stdc++.h>
using namespace std;


int main(){
string s;
cin>>s;
int n=s.length();
vector<int>v;
for(int i=0;i<n;i=i+2){
    int a = s[i]-'0';
    v.push_back(a);
}
sort(v.begin(),v.end());
// reverse(v.begin(),v.end());
int j=0;
for(int i=0;i<n;i=i+2){
     s[i] = v[j]+'0' ;
    j++;
    
}
cout<<s;
return 0;
}



