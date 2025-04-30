#include <stdio.h>
#include <stdlib.h>

int *r(int n) {
    int *a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    return a;
}

int c(int *a, int n) {
    int f = 0, b = 0, m = 1e9, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) f = 1;
        else if (a[i] == a[0]) f++;
        int l = i + 1, d = 2 * f - l;
        if (d < m) m = d;
        if (m > 0 && d > b) cnt++;
        if (d > b) b = d;
    }
    return cnt;
}

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int *a = r(n);
        printf("%d\n", c(a, n));
        free(a);
    }
    return 0;
}
