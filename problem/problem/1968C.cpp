#include <iostream>
#include <vector>
using namespace std;
#define ll long long
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> x(n - 1);
        for (ll i = 0; i < n - 1; i++) {
            cin >> x[i];
        }
        vector<ll> a(n);
        a[0] = 501; 
        for (ll i = 1; i < n; i++) {
            a[i] = (a[i - 1] + x[i - 1]); 
        }
        // a[0]=x[0]%a[1];
      
        for (ll i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        
        cout << endl;
    }
    return 0;
}
