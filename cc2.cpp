#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> H(N);
        for (int i = 0; i < N; ++i) {
            cin >> H[i];
        }
        
        int p = N - 1;
        int t = 0;
        
        bool s = true;
        for (int i = 0; i < p; ++i) {
            if (H[i] >= H[p]) {
                s = false;
                break;
            }
        }
        
        if (s) {
            cout << t << endl;
            continue;
        }
        
        while (p > 0) {
            swap(H[p], H[p - 1]);
            p--;
            t++;
            
            s = true;
            for (int i = 0; i < p; ++i) {
                if (H[i] >= H[p]) {
                    s = false;
                    break;
                }
            }
            
            if (s) {
                break;
            }
        }
        
        cout << t << endl;
    }
    return 0;
}