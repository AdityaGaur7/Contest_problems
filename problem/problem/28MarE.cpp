// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define v(x) vector<int> x
#define vb(x) v.push_back(x)
#define l(s) (int)s.size()
#define p(x, y) make_pair(x, y)
#define vp vector<pair<int, int>> vp
#define s(a) sort(a.begin(), a.end())
#define r(a, b, c) for (int i = b; i < c; i++)
#define pr(x) cout << x << endl
#define t    \
    int t;    \
    cin >> t; \
    while (t--)
#define mx(arr) *max_element(arr.begin(), arr.end())
#define mn(arr) *min_element(arr.begin(), arr.end())
#define ll long long

#define lw transform(s.begin(), s.end(), s.begin(), ::tolower);

int shortestsubstring(const string& s){
    int n = s.size();
    vector<int>prefix(n,0);

    for(int i=1;i<n;++i){
        int j= prefix[i-1];
        while(j>0 && s[i]!=s[j]){
            j=prefix[j-1];
        }
        if(s[i]==s[j]){
            prefix[i]=j+1;
        }
    }

int shortest =n-prefix[n-1];

for(int i=0;i<n-1;++i) {
    if(prefix[i]==prefix[n-1]){
        shortest = min(shortest,n-i-1);
      }

     }
     return shortest;
    
}




int main()
{
    int x;
    cin>>x;
    while(x--){
int n;cin>>n;
   string s;
   cin>>s;
   int result = shortestsubstring(s);
   cout<<result<<endl;
    }
   
    return 0;
}
