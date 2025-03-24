#include <bits/stdc++.h>
using namespace std;

bool func(int a[],int n){
    
    
     for(int i=0;i<n;i++){
      if(a[i]==1){
          return true;
          
      }
  }
  return false;
}


int main()
{
  
  int n;
  cin>>n;
  int a[n];
  
  bool flag = false;
  
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
 
 flag = func(a,n);
  
  if(flag == true){
      cout<<"hard"<<endl;
  }
  else{
      cout<<"No"<<endl;
  }
  
    return 0;
}