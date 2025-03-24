#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a;
        long long s = 0;
        
        for (int i = 0; i < n; i++) {
            int v;
            cin >> v;
          a.push_back(v);
        }
         for (int i = 0; i < n; i++) {
           
            s += a[i];
        }
        if (s % 3 == 0) {
            cout << 0 << endl;
        } else {
            bool g = false;
            for (int i = 0; i < n; i++) {
                long long r = s - a[i];
                if (r % 3 == 0) {
                    g = true;
                    break;
                }
            }
            if (g) {
                cout << 1 << endl;
            } else {
                long long r = s % 3;
                r = 3 - r;
                if (r < 2) {
                    cout << 1 << endl;
                } else {
                    cout << 2 << endl;
                }
            }
        }
    }
    
    return 0;
}
