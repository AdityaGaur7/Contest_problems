#include <iostream>
#include <vector>
#include <string>
using namespace std;

void p(int n, vector<int>& a, const string& b, vector<int>& c) {
    vector<bool> d(n, false);
    vector<int> e(n, 0);

    for (int i = 0; i < n; ++i) {
        if (!d[i]) {
            vector<int> f;
            int g = i;

            while (!d[g]) {
                d[g] = true;
                f.push_back(g);
                g = a[g] - 1;
            }

            int h = 0;
            for (int j : f) {
                if (b[j] == '0') {
                    ++h;
                }
            }

            for (int j : f) {
                e[j] = h;
            }
        }
    }

    c = move(e);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        string b;
        cin >> b;

        vector<int> c(n);
        p(n, a, b, c);

        for (int i = 0; i < n; ++i) {
            cout << c[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
