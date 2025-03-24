// author - Aditya gaur //
#include <bits/stdc++.h>
using namespace std;
// Macros
#define vec(x) vector<int> x
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x, y) make_ pair(x, y)
#define vp vector<pair<int, int>> vp
#define srt(a) sort(a.begin(), a.end())
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define print(x) cout << x << endl

#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define ll long long
#define mod 1000000007
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower);



int main(){
    int tc;
    cin>>tc;
    while(tc--){
       string s;
       cin>>s;
       string a = s.substr(0,1);
       string b = s.substr(1,2);
       set<string>v;
       for(char i ='1';i<='8';i++){
        string x=""; 
        x = a+ i;
        v.insert( a+ i); 
       }
        for(char i ='a';i<='h';i++){
        string x=""; 
        x = i+b;
        v.insert(x); 
       }
       if(v.find(s)!=v.end()){
        v.erase(s);
       }
  for(auto x:v)cout<<x<<endl;



    }
    return 0;
}