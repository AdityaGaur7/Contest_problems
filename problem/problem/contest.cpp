#include<bits/stdc++.h>

using namespace std;

bool check(vector<string>& c) {
    int n = c.size();
    int m = c[0].size();

    for (int c1 = 0; c1 < m; ++c1) {
        for (int c2 = c1 + 1; c2 < m; ++c2) {
            for (int c3 = c2 + 1; c3 < m; ++c3) {
                for (int c4 = c3 + 1; c4 < m; ++c4) {
                    bool fv = false, fi = false, fk = false, fa = false;
                    for (int r = 0; r < n; ++r) {
                        if (c[r][c1] == 'v') fv = true;
                        if (c[r][c2] == 'i') fi = true;
                        if (c[r][c3] == 'k') fk = true;
                        if (c[r][c4] == 'a') fa = true;
                    }
                    if (fv && fi && fk && fa) {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<string> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        if (check(c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

/*

*/