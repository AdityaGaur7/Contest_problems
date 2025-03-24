#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    deque<int> dq;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        dq.push_back(val);
    }

    int e, f;
    if(x % 2 == 1) {
        e = x / 2;
        f = x - e;
    } else {
        f = x / 2;
        e = x / 2;
    }

    int cnt = 0;
    while(!dq.empty() && f > 0) {
        int frontVal = dq.front();
        if(f>0) {
        cout<<frontVal<<" -> ";
            f -= frontVal;
            dq.pop_front();
            cnt++;
        } else {
            break;
        }
    }

    while(!dq.empty() && e > 0) {
        int backVal = dq.back();
        if(e>0) {
        cout<<backVal<<" ";
            e -= backVal;
            dq.pop_back();
            cnt++;
        } else {
            break;
        }
    }
    while(dq.empty()==false){
        // cout<<dq.front()<<" ";
        dq.pop_front();
    }
    // cout<<e<<" =";

    cout << cnt << endl;
    // cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
