#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;

long long a=0,b=0,c=0;
for(int i=0;i<n;i++){
    int x,y,z;
    cin>>x>>y>>z;
    a=a+x;
    b=b+y;
    c=c+z;
   

}


if(!a && !b && !c)cout<<"YES"<<endl;
else cout<<"NO"<<endl;







    return 0;
}