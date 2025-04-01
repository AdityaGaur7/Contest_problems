#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        int max_val = *max_element(a.begin(), a.end());
        int min_val = *min_element(a.begin(), a.end());
 
        int result = max_val - min_val;  // Maximum pleasure is the difference between max and min values
 
        cout << result << endl;
    }

 
    return 0;
}