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




void solve()
{
string str;
cin>>str;
int n =  str.size();
string ans ="";
for(int i=0;i<n;i++){
    if(str[i]=='-' && str[i+1]=='-'){ans+='2'; i++;}
    else if(str[i]=='-' && str[i+1]=='.'){ans+='1';i++;}
    else if(str[i]=='.')ans+='0';

}
// reverse(ans.begin(),ans.end());
cout<<ans<<endl;
}

int main()
{
    solve();
    
    return 0;
}
