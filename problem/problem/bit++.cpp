#include<bits/stdc++.h>
using namespace std;


int main(){
int n,sum=0;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    string t;
    cin>>t;
    if(t=="++X" || t=="X++")v.push_back(1);
    else if(t=="--X" || t=="X--")v.push_back(-1);
    sum = sum+v[i];
}

cout<<sum;


return 0;
}



