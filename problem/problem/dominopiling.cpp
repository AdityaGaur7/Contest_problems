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
void main(){
 long long n,k;
 cin>>n>>k;

 long long  area = n*k;

 long long no = area/2;
 
   cout<<no;
    // return 0;

}