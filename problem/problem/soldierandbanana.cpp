#include<bits/stdc++.h>
using namespace std;


int main(){
    
    long long k,n,w;
    cin>>k>>n>>w;
    long long t = (w*(w+1)*k)/2;
    if(n>=t)cout<<0;
    else
    cout<<t-n;
return 0;
}



