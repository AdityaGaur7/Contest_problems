// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define vecv vector<int> v
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

void solve()
{

   int n;cin>>n;
bool f = true;
 
   set<int>st;
     int a;cin>>a;
   r(i,0,a){
    int temp;cin>>temp;
    st.insert(temp);
   }
   int b;cin>>b;
   
   r(i,0,b){
    int temp;cin>>temp;
    st.insert(temp);
   
   }
   for(int i=1;i<=n;i++){
    if(st.find(i)==st.end())f=false;
   }


  
   if(f)cout<<"I become the guy."<<endl;
   else cout<<"Oh, my keyboard!"<<endl;
   
}

int main()
{
    solve();
    return 0;
}
