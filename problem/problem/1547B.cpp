
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
void solve(){
string s;
cin>>s;
deque<char> dq;
int n = s.size();
for(int i = 0 ;i<s.size();i++){
    dq.push_back(s[i]);
}
char l = 'a'+n-1;

while(dq.size()>0){
    if(dq.front() == l)dq.pop_front();
    else if(dq.back()==l)dq.pop_back();
    else{
        cout<<"NO\n";
        return ;
    }
  l--;
}
cout<<"YES\n";



}

int main(){
   ll t;
cin>>t;
while(t--){
    solve();
    
}
 
    return 0;
 }


   

