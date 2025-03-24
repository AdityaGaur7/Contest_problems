#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long sum = 0;
        for (long long i = 0; i < n; i++) {
            long long u;
            cin >> u;
            sum += u;
        }

        long long sqrt_sum = static_cast<long long>(sqrt(sum));
        if (sqrt_sum * sqrt_sum == sum) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
