#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;

bool fun(int a,int b,int c){
    if(a+b>=10 || b+c>=10 || c+a>=10){
        return true;
    }
    else return false;
}


int main() {

int n;
cin>>n;
while(n--){
    int a,b,c;
    cin>>a>>b>>c;
        
        bool flag = fun(a,b,c);
        if(flag == true )cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;

}