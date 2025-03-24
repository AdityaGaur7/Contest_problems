#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;
 


 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n,k;
        cin >> n>>k;
 
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            v.push_back(i+1);
        }
        int i = 0,j=1;
 
        while(k--){
            swap(v[i],v[j]);
            i=(i+2)%n;
            j=(j+2);
           
        }
 for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
 }
 cout<<endl;
 
       
    }
 
    return 0;
}