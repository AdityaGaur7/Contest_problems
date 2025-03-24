//////////////////////////////////////DON'T GIVEUP////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
///////////////////////////////////// MACROS /////////////////////////////////////////

#define int long long
#define double long double
#define vec(v) vector<int> v
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define p(x) cout << x << endl;
#define brk cout << "\n";
#define l(n) for (int i = 0; i < n; i++)
#define p(v) for (auto it : v) cout << it << " ";
#define cin(v, n) for (int i = 0; i < n; i++) cin >> v[i]
#define rev(a) reverse(a.begin(), a.end())
#define r(i, a, b) for (int i = a; i < b; i++)
#define tc int t; cin >> t; while (t--)
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define mod 1000000007
#define sumy(v, x) accumulate(v.begin(), v.end(), x)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))
#define lb(arr, target) (lower_bound(arr.begin(), arr.end(), target) - arr.begin())
#define ub(arr, target) (upper_bound(arr.begin(), arr.end(), target) - arr.begin())
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " " << x << endl;
#define PI 3.14159265358979323846
#define endl '\n'

////////////////////////////////////// FUNCTIONS ////////////////////////////////
vector<int> printDivisors(int n) {
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                v.push_back(i);
            } else {
                v.push_back(i);
                v.push_back(n / i);
            }
        }
    }
    return v;
}

vector<int> primeFactors(int n) {
    vector<int> v;
    while (n % 2 == 0) {
        v.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            v.push_back(i);
            n = n / i;
        }
    }
    if (n > 2) {
        v.push_back(n);
    }
    return v;
}

vector<int> SieveOfEratosthenes(int n) {
    bool prime[n + 1];
    vector<int> v;
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            v.push_back(p);
    return v;
}

bool isprime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int power(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

int modexpo(int x, int y, int p) {
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

int modInverse(int n, int p) {
    return modexpo(n, p - 2, p);
}

int nCrModPFermat(int n, int r, int p) {
    if (r == 0)
        return 1;
    int fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = fac[i - 1] * i % p;
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int nCrModpDP(int n, int r, int p) {
    int C[r + 1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j - 1]) % p;
    }
    return C[r];
}

int nCrModpLucas(int n, int r, int p) {
    if (r == 0)
        return 1;
    int ni = n % p, ri = r % p;
    return (nCrModpLucas(n / p, r / p, p) * nCrModpDP(ni, ri, p)) % p;
}

int nCrModp(int n, int r, int p) {
    if (r == 0)
        return 1;
    int fac[n + 1];
    fac[0] = 1;
    for (int i = 1; i <= n; i++)
        fac[i] = fac[i - 1] * i % p;
    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int fact(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int nPr(int n, int r) {
    return fact(n) / fact(n - r);
}

int bin2deci(string num){
 return stoi(num, 0, 2);
    
}

string deci2bin(int n){
     string b =bitset<32>(n).to_string();
     return b;
}

int sumofdigits(int n){
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int countdigit(int n){
    return floor(log10(n) + 1);
}

int firstdigit(int n){
    while (n >= 10)
        n /= 10;
    return n;
}

int flipbits(int num) 
{ 
    
    int x = log2(num) + 1; 
  
    
    for (int i = 0; i < x; i++)  
       num = (num ^ (1 << i));  
   
    return num;
} 



/////////////////////////////////////// MAIN CODE /////////////////////////////
void ok() {








}

///////////////////////////////////// MAIN FUNCTION //////////////////////////////
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    tc {
        ok();
    }
    return 0;
}