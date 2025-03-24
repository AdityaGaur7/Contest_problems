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
    int a[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
    }     
}
vector<char>v;
for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(a[i][j]!='.'){
            v.push_back(a[i][j]);
            }
    }     
}
for(auto it:v){
cout<<it;
}
cout<<endl;
}
    return 0;

}