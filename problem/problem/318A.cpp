#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    
        long long n,x,s;
        cin>>n>>x;
        long long ans = 0;
        if(n%2!=0){
         s = (n/2) +1;
        }else{
            s = n/2;
        }
        
        if(x<s){
            for(int i=1;i<s;i+2){
                ans = i;
            }
        }
        else{
            for(int i=2;i<(n-x);i+2){
                ans = i;
            }
        }
        cout<<ans;
        

       
        
    

    return 0;
}
