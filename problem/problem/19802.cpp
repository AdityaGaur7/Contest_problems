#include <bits/stdc++.h>
using namespace std;

#define vec vector<int>
#define vpb(x) v.push_back(x)
#define mp(x,y) make_pair(x,y)
#define F first
#define S second
#define rev(a) reverse(a.begin(),a.end())
#define r(i,a,b) for (int i = a; i < b; i++)
#define tc int t; cin >> t; while(t--)
#define ll long long
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))


int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}


bool ispos(vec& a) {
    int n = a.size();
    vec seq(n - 1);
    
  
    r(i, 0, n - 1) {
        seq[i] = gcd(a[i], a[i + 1]);
    }
    
  
    bool nd = true;
    r(i, 1, n - 1) {
        if (seq[i] < seq[i - 1]) {
            nd = false;
            break;
        }
    }
    if (nd) return true;

    r(i, 0, n) {
        vec t;
        r(j, 0, n) {
            if (i != j) t.push_back(a[j]);
        }
        
        vec tgs(t.size() - 1);
        r(k, 0, t.size() - 1) {
            tgs[k] = gcd(t[k], t[k + 1]);
        }
        
        bool tnd = true;
        r(k, 1, t.size() - 1) {
            if (tgs[k] < tgs[k - 1]) {
                tnd = false;
                break;
            }
        }
        
        if (tnd) return true;
    }
    
    return false;
}

int main() {
    tc {
        int n;
        cin >> n;
        vec a(n);
        r(i, 0, n) {
            cin >> a[i];
        }
        cout << (ispos(a) ? "YES" : "NO") << endl;
    }
    return 0;
}
