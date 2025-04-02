#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 998244353
#define ll long long
#define f(i, a, n) for (int i = a; i < n; i++)

ll me(ll b, ll e) {
    ll r = 1 % MOD;
    b %= MOD;
    while (e > 0) {
        if (e & 1) r = (r * b) % MOD;
        b = (b * b) % MOD;
        e >>= 1;
    }
    return r;
}

ll solve(int n, int *a, int y, int t) {
    ll fa[t + 1], ifa[t + 1];
    fa[0] = 1;
    f(i, 1, t + 1) fa[i] = (fa[i - 1] * i) % MOD;
    ifa[t] = me(fa[t], MOD - 2);
    for (int i = t - 1; i >= 0; i--) ifa[i] = (ifa[i + 1] * (i + 1)) % MOD;
    ll ta = fa[t];
    f(i, 0, n + 1) ta = (ta * ifa[a[i]]) % MOD;
    int *dp = (int *)calloc(y + 1, sizeof(int));
    dp[0] = 1;
    f(i, 0, n) {
        int ai = a[i];
        for (int s = y; s >= ai; s--) dp[s] = ((dp[s] - dp[s - ai]) % MOD + MOD) % MOD;
    }
    ll st = 0;
    f(s, 0, y + 1) {
        if (dp[s] != 0) {
            int d = a[n] + s;
            ll id = me(d, MOD - 2);
            ll te = ((ll)dp[s] * a[n]) % MOD;
            te = (te * id) % MOD;
            st = (st + te) % MOD;
        }
    }
    free(dp);
    return (ta * st) % MOD;
}

int main() {
    int t;
    scanf("%d", &t);
    f(tc, 0, t) {
        int n;
        scanf("%d", &n);
        int a[n + 1], y = 0, to = 0;
        f(i, 0, n + 1) {
            scanf("%d", &a[i]);
            if (i < n) y += a[i];
            to += a[i];
        }
        printf("%lld\n", solve(n, a, y, to));
    }
    return 0;
}