#include <bits/stdc++.h>  
using namespace std;  

#define ll long long  
#define vi vector<int>  
#define vl vector<ll>  
#define pb push_back  
#define pv(v) for(auto it:v)cout<<it<<" "  
#define f(i, a, n) for (int i = a; i < n; i++)  
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)  

void ok() {  
    ll n, q;  
    cin >> n >> q;  
    
    // Use difference array for efficient updates  
    vl diff(n + 1, 0);  
    vl original(n);  
    
    // Read original array  
    f(i, 0, n) {  
        cin >> original[i];  
        // Initialize difference array  
        if (i == 0) {  
            diff[i] = original[i];  
        } else {  
            diff[i] = original[i] - original[i-1];  
        }  
    }  
    diff[n] = 0;  
    
    // Process queries  
    while(q--) {  
        ll l, r, k;  
        cin >> l >> r >> k;  
        
        // Adjust difference array  
        diff[l-1] += k;  
        diff[r] -= k;  
    }  
    
    // Reconstruct the modified array  
    vl result(n);  
    result[0] = diff[0];  
    f(i, 1, n) {  
        result[i] = result[i-1] + diff[i];  
    }  
    
    // Print final array  
    pv(result);  
}  

int32_t main() {  
    fastio;  
    ok();  
    return 0;  
}  