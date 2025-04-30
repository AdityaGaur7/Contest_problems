////////////////////----------Jai Shree Ram----------////////////////////
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define fi(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define tc    \
    int ttt;  \
    cin >> ttt; \
    while (ttt--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pt(x) cout << x << endl
#define br cout << "\n"
#define endl '\n'

// Read input values
void read_input(int &n, string &s) {
    cin >> n >> s;
}

// Split cards between Alice and Bob
void split_cards(const string &s, vi &alc, vi &bob) {
    int len = sz(s);
    fi(i, 0, len) {
        if (s[i] == 'A') alc.pb(i + 1);
        else bob.pb(i + 1);
    }
}

// Check if Alice can win
bool check_win(const vi &alc, const vi &bob, int n) {
    for (auto x : alc) {
        bool chk = false;
        
        if (x == 1) {
            for (auto y : bob) {
                if (y >= 2 && y <= n - 1) {
                    chk = true;
                    break;
                }
            }
        }
        else if (x == n) {
            for (auto y : bob) {
                if (y == 1) {
                    chk = true;
                    break;
                }
            }
        }
        else {
            for (auto y : bob) {
                if (y > x) {
                    chk = true;
                    break;
                }
            }
        }
        
        if (!chk) return true;
    }
    return false;
}

// Solve for one test case
void solve() {
    int nnn;
    string sss;
    read_input(nnn, sss);
    
    vi alc, bob;
    split_cards(sss, alc, bob);
    
    bool win = check_win(alc, bob, nnn);
    
    pt(win ? "Alice" : "Bob");
}

// Main function
int32_t main() {
    fastio;
    tc {
        solve();
    }
    return 0;
}
