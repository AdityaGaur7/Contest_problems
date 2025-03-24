#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int countDistinctK(int a, int b, int l) {
    vector<bool> dp(l + 1, false);
    dp[0] = true;

    for (int i = 0; i <= l; ++i) {
        if (dp[i]) {
            if (i + a <= l) {
                dp[i + a] = true;
            }
            if (i + b <= l) {
                dp[i + b] = true;
            }
        }
    }

    unordered_set<int> possible_k_values;
    for (int i = 0; i <= l; ++i) {
        if (dp[i] && l % i == 0) {
            int k = l / i;
            if (k % a == 0 && k % b == 0) {
                possible_k_values.insert(k / a);
            }
        }
    }

    return possible_k_values.size();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, l;
        cin >> a >> b >> l;
        cout << countDistinctK(a, b, l) << endl;
    }

    return 0;
}