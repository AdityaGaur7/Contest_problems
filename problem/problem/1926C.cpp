#include <iostream>
#include <vector>
using namespace std;

 int f(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}

int main() {
    vector<int> r(200010, 0);

    for (int i = 1; i <= 200010; ++i) {
        r[i] = f(i) + r[i - 1];
    }

    long long t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << r[n] << endl;
    }

    return 0;
}