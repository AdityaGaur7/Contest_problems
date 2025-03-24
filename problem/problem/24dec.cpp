#include <iostream>
using namespace std;

long long maxCoins(long long n) {
    if (n <= 3) return 1;
    return maxCoins(n / 4) * 2;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << maxCoins(n) << endl;
    }
    return 0;
}
