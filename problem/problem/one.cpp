// author - Aditya gaur //
#include<bits/stdc++.h>
using namespace std;
// Macros
#define vecv vector<int>v
#define vpb(x) v.push_back(x)
#define len(s) (int)s.size()
#define mp(x,y) make_ pair(x,y)
#define vp vector<pair<int,int>>vp
#define sort(a) sort(a.begin(),a.end())
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define all(a) (a.begin()),(a.end())
#define r(i,a,b) for ( int i = a; i< b; i++)
#define print(x) cout<<x<<endl
#define tc  int t;cin>>t;while(t--)
#define it(x) for(auto it:x){ cout<<it<<" "; } cout<<endl
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



    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    string a = s1;
    int cnt=0;
   
    //    if(a.find(s2)!=string::npos){
    //     cout<<0<<endl;
        
    //    }
    if(n<m){
      while(a.length()<m){
        a = a + a;
        cnt++;
      }
    }else{
        if(a.find(s2)!=string::npos){
           
        }else{
    a = a+ a;
        cnt++;
        }
    
    }



    if(a.find(s2)!=string::npos){
   cout<<cnt<<endl;
    }
   
    else{
         a = a+ a;
        cnt++;
        if(a.find(s2)!=string::npos){
cout<<cnt<<endl;
        }else{
        cout<<-1<<endl;

        }
        

    }

}
}
int main(){
  solve();
    return 0;
 }
// int cnt = 0; 
//     string current = s1;
//     if(n<m){

//     while (current.size() < m) {

//        current = s1 +current;
//         operations++;
//     } 
       
    
  
//     }else{
//          current += s1;
//         operations++;
//     }
//        cout<< operations<<endl;
    

   

