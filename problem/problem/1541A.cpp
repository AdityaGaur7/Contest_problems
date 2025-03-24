
#include<bits/stdc++.h>
using namespace std;

#define v vector<int>v
#define vpb(x) v.push_back(x)
#define mp(x,y) make_ pair(x,y)
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define tc  int t;cin>>t;while(t--)
#define ll long long 
#define lwr   transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(),arr.end())
#define mini(arr) *min_element(arr.begin(),arr.end())
#define bs(arr,target) (binary_search(arr.begin(),arr.end(),target))
void solve(){

int t;
cin>>t;
while(t--){


int n ;
cin>>n;
int a[n];
int x = 0;
for(int i =1;i<=n;i++){
    a[x]=i;
    x++;
}

if(n%2==0){

int i = 0 , j = 1;
while(i<n){
    swap(a[i],a[j]);
    i+=2;j+=2;
}
}else{
    a[0]=3,a[1]=1,a[2]=2;
    int i = 3, j=4;
    while(i<n){
        swap(a[i] , a[j]);
        i+=2;j+=2;
    }
}
if(n==3){
    cout<<3<<" "<<1<<" "<<2;
    // return ;
}else
for(int i =0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}

}

int main(){
  solve();
    return 0;
 }


   

