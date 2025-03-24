#include<bits/stdc++.h>
using namespace std;
int main(){
  int count =0,total=0;
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
      cin>>a>>b>>c;
        count = a+b+c;
        if(count>=2)total++;
    }

    cout<<total;

    return 0;

}