#include<bits/stdc++.h>
using namespace std;

bool count(int a[], int n){
 int sum=0,prod=1;
 int i=0;
while(i<n){
sum=sum+a[i];
prod=prod*a[i];
i++;
}
if(sum>=0 && prod ==1){
    return true;
}else{
   return false;
}
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
 for(int i=0;i<n;i++){
        a[i]= -1*a[i];
        
        count(a,n);
        cnt++;
    }
    cout<<cnt;







    
}






    return 0;
}