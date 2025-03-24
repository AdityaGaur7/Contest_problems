// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define vec(x) vector<int> x
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x, y) make_ pair(x, y)
#define vp vector<pair<int, int>> vp
#define sort(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define print(x) cout << x << endl
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define ll long long
#define mod 1000000007
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower);



bool fun(int n){
   int cnt =0;
     bool f =false;
   vec(v); 
   if(n%4==0 || n%7==0){
    return true;

   }
  else if(n%4!=0 && n%7!=0) {
    while(n!=0){
       
   int r= n%10;
         n=n/10;
         vpb(r);
    }
   

    for(auto it:v){
    if(it==4 || it==7) cnt++;
    }
      
  }
  if(v.size()==cnt)return true;
  return false;
    
}

void solve()
{
 int n ;
 cin>>n;

  bool f = fun(n);

    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}

int main()
{
    // solve();
     int n ;
    cin>>n;
    if(n%4==0 || n%7==0 || n%44==0|| n%47==0 || n%74==0 ||n%77==0 || n%444==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%747==0 || n%774==0 || n%777==0 )
    {
        cout<<"YES";
    }
    else
        {
        cout<<"NO";
    }
    return 0;
    return 0;
}
