#include <iostream>
#include <string>
#define F(i, a, b) for (int i = a; i < b; ++i)
#define R(i, a, b) for (int i = a; i >= b; --i)
using namespace std;

void solve() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    
    R(i, N - 2, 0) {
        if (K <= 0) break;
        if (S[i] == '0' && S[i+1] == '1') {
            S[i] = '1';
            K--;
        }
    }
    
    int c = 0;
    F(i, 0, N) {
        if (S[i] == '1') c++;
    }
    cout << c << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    
    return 0;
}