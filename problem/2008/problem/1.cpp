#include <bits/stdc++.h>
using namespace std;

bool is_beautiful_square(const string& s, int k) {
    for (int i = 0; i < k; ++i) {
        if (s[i] != '1' || s[(k - 1) * k + i] != '1') return false; 
        if (s[i * k] != '1' || s[i * k + k - 1] != '1') return false; 
    }
   
    for (int i = 1; i < k - 1; ++i) {
        for (int j = 1; j < k - 1; ++j) {
            if (s[i * k + j] != '0') return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int k = sqrt(n);
        if (k * k != n) {
            cout << "No\n";
            continue;
        }

        if (is_beautiful_square(s, k)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
