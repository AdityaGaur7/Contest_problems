#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    
        int n;
        cin >> n;
        int a[n];
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        sort(a,a+n,greater<int>());
        
        sum = sum/2;
        int ans = 0;
        int i=0;
        while(ans<=sum){
            ans = ans+a[i];
        }
        cout<<i;
        

       
        
    

    return 0;
}
