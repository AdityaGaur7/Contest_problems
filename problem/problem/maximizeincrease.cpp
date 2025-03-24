#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#include <cmath>
#define f(n) for(int i=0;i<n;i++)
#define ll long long
using namespace std;



int main() {
int n;
cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
{
    cin>>a[i];

}
int num=a[0],cnt=0;


int i=0,j=1;
for(;i<n;i++)
{
    if(a[j]>num){
        cnt++;
        num=a[j];
        j++;
    }

}
cout<<cnt<<endl;

   return 0;
}