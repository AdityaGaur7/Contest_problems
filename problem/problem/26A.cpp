#include<bits/stdc++.h>
using namespace std;

#define vec vector<int>v
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
vector<int> primeFactors(int n) 
{ 

    vector<int>v;
    while (n % 2 == 0) 
    { 
        // cout << 2 << " "; 
        v.push_back(2);

        n = n/2; 
    } 
  
    for (int i = 3; i <= sqrt(n); i = i + 2) 
    { 
        while (n % i == 0) 
        { 
            // cout << i << " "; 
             v.push_back(i);
            n = n/i; 
        } 
    } 
 
    if (n > 2) 
        // cout << n << " "; 
         v.push_back(n);

  return v;

} 

void solve(){
 int n;
 cin>>n;
int cnt =0;
for(int i=2;i<=n;i++){
   vector<int>v = primeFactors(i);

     for(auto it :v){
        cout<<it<<" ";
     }
     cout<<endl;
}


cout<<cnt<<endl;
}

int main(){
//  int t;
//     cin>>t;
//     while(t--){
  solve();

    // }
 }