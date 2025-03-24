#include<bits/stdc++.h>
using namespace std;

bool canFormPalindrome(string s, int k) {
    int n = s.length();
    map<char, int> m;

    for (int i = 0; i < n; i++) {
        m[s[i]]++;
    }

    int oddCount = 0;
    for (auto x : m) {
        if (x.second % 2 != 0) {
            oddCount++;
        }
    }

    if (oddCount <= k && k <= n) {
        return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if (canFormPalindrome(s, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
