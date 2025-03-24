#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";

    string binary = "";
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }

    return binary;
}

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin >> n;
    long long a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    vector<string>v;
for(int i=0;i<n;i++){
    
    string r = decimalToBinary(a[i]);
    v.push_back(r);

    }

for(auto it:v){
  cout<<it<<" ";
}
cout<<endl;
  }
    return 0;
}
