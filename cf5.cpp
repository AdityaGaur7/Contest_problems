#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define tc int t; cin >> t; while (t--)
#define pi(x) cout << x << endl;

const int N = 1e7 + 5;
vi p(N, 1),f(N, 0);

void pre() {
    p[0] = p[1] = 0;
    for (int i = 2; i < N; i++) {
        if (p[i]) {
            for (int j = 2 * i; j < N; j += i)
                p[j] = 0;
        }
    }
    for (int g = 1; g < N; g++) {
        for (int k = 2 * g; k < N; k += g) {
            int F = (k / g);
            if (p[F]) f[k]++;
        }
    }
    for (int i = 2; i < N; i++) {
        f[i] += f[i - 1];
    }
}

int main() {
    fastio;
    pre();
    tc {
        int n;
        cin >> n;
        pi(f[n]);
    }
    return 0;
}
