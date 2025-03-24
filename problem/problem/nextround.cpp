#include<bits/stdc++.h>
using namespace std;



int fun(int arr[], int n , int k){
int m=0;
for(int i=0;i<n;i++){
   if(arr[i]==k){
       
     m=i-1;
       return m;
   }
 }
 return -1;
}
int main(){
 int n,k;
 cin>>n>>k;
 int a[n];
 for(int i=1;i<=n;i++){
    cin>>a[i];
 }



 int m= fun(a,n,k);
 
   cout<<m;
    return 0;

}