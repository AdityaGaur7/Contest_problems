#include<bits/stdc++.h>
using namespace std;

int func(long long ar[5][5]){
int x=0,y=0;
vector<int>v;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(ar[i][j]==1){
        //   v.push_back(i);
        //   v.push_back(j);
        x=i+1;y=j+1;
            break;
        }
    }
}
x = abs(x-3);
 y = abs(y-3);
int res = x+y;
return res;



}

int main(){

long long a[5][5];
for(int i =0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>a[i][j];
    }
}

int m=func(a);


cout<<m;
return 0;
}



