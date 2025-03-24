#include<bits/stdc++.h>
using namespace std;


int main(){
    
int n;
string s;
cin>>n>>s;
int d=0,a=0;
for(int i=0;i<n;i++){
    if(s[i]=='A')a++;
    else if(s[i]=='D')d++;
}
if(a>d)cout<<"Anton";
else if(a<d)cout<<"Danny";
else cout<<"FRIENDSHIP";
return 0;
}



