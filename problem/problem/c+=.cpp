#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;



int main() {
int t;
cin>>t;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int cnt = 0;
    while(a<=c && b<=c){
        if(a<b){
            a=a+b;
            
        }
        
        else if(a>=b){
            b= b+a;
            
        }
        cnt++;
    }
    cout<<cnt<<endl;





}

return 0;
}