#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>v
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
long long x ;
vector<int>v;
void solve(int n){
if(n==0)return ;
x = n;
if(n/2) {
    x = x/2;
    v.push_back(x);

}else {
    x = 
    v.push_back(3*n+1);

}
solve(n-1);

return ;


}

int main(){
 
int n;
cin>>n;
solve(n);
cout<<v.size()<<endl;

 }