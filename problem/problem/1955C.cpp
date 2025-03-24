#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    deque<int> dq;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    int cnt = 0;
    while(x >0 && !dq.empty()) {
        int a = dq.front();
        a = max(0, a - 1);
        if(a == 0) {
            dq.pop_front();
            cnt++;
        } else {
            dq.pop_front();
            dq.push_back(a);
        }
        x--;
    }

    cout << cnt << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
