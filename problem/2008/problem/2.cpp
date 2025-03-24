#include <iostream>
using namespace std;

int f(long long l, long long r) {
    int k = 1;
    while (k * (k - 1) / 2 <= (r - l)) {
        ++k;
    }
    return k - 1;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        long long l, r;
        cin >> l >> r;
        cout << f(l, r) << "\n";
    }

    return 0;
}
