#include<bits/stdc++.h>
using namespace std;


int main(){
int n,a,b;
cin>>n;
int max = 0;
int sum = 0;
while(n--){
    cin>>a>>b;
    sum = sum -a +b ;
     if(sum>max) max = sum;
}
cout<<max;
return 0;
}



