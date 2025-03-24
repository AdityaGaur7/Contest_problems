#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
   int n,k,l,c,d,p,nl,np,a,b,x,mini;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   a = (k*l)/nl;
    b = c*d;
    x = p/np;
    mini = min(a,b);
    mini = min(mini,x);
    mini = mini/n;
    cout<<mini;
    return 0;
}
