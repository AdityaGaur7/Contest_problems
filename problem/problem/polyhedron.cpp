#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>
#define f(n) for(int i=0;i<n;i++)

using namespace std;

int main() {
int n;
cin>>n;

long long sum =0;
int s[n];
f(n){
    string a;
    cin>>a;
    if(a=="Icosahedron")s[i]=20;
    else if(a=="Cube")s[i]=6;
    else if(a=="Tetrahedron")s[i]=4;
    else if(a=="Dodecahedron")s[i]=12;
    else if(a=="Octahedron")s[i]=8;
}
f(n){
    sum = sum+s[i];
}
cout<<sum<<endl;


    return 0;
}
