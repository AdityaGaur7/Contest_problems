#include <iostream>  
#include <vector>  
using namespace std;  

int main() {  
    int N, M;  
    cin >> N >> M;  
    vector<vector<char>> A(N, vector<char>(M));  
    for (int i = 0; i < N; i++) {  
        for (int j = 0; j < M; j++) {  
            cin >> A[i][j];  
        }  
    }  
    int X, Y;  
    cin >> X >> Y;  
    X--; Y--;  
    bool allNeighborsX = true;  

    if (X > 0) {  
        if (Y > 0 && A[X - 1][Y - 1] != 'x') allNeighborsX = false;  
        if (A[X - 1][Y] != 'x') allNeighborsX = false;  
        if (Y < M - 1 && A[X - 1][Y + 1] != 'x') allNeighborsX = false;  
    }  
    if (Y > 0 && A[X][Y - 1] != 'x') allNeighborsX = false;  
    if (Y < M - 1 && A[X][Y + 1] != 'x') allNeighborsX = false;  
    if (X < N - 1) {  
        if (Y > 0 && A[X + 1][Y - 1] != 'x') allNeighborsX = false;  
        if (A[X + 1][Y] != 'x') allNeighborsX = false;  
        if (Y < M - 1 && A[X + 1][Y + 1] != 'x') allNeighborsX = false;  
    }  

    cout << (allNeighborsX ? "yes" : "no") << endl;  
    return 0;  
}  
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define dl long double
#define vi vector<int>
#define vl vector<ll>
#define vpi vector<pair<int,int>>
#define vpl vector<pair<ll,ll>>
#define pb push_back
#define mp make_pair
#define mii map<int,int>
#define mll map<ll,ll>
#define ff first
#define ss second
#define yes cout << "YES\n"
#define pv(v) for(auto it:v)cout<<it<<

#define no cout << "NO\n"
#define p(x) cout << x << endl;
#define brk cout << "\n";
#define f(i, a, n) for (int i = a; i < n; i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define rev(x) reverse(x.begin(), x.end())
#define sz(x) (int)x.size()
#define tc int t; cin >> t; while (t--)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod 1000000007
#define endl '\n'
#define sumy(v, x) accumulate(v.begin(), v.end(), x)
#define maxi(arr) *max_element(arr.begin(), arr.end())
#define mini(arr) *min_element(arr.begin(), arr.end())
#define bs(arr, target) (binary_search(arr.begin(), arr.end(), target))
#define lb(arr, target) (lower_bound(arr.begin(), arr.end(), target) - arr.begin())
#define ub(arr, target) (upper_bound(arr.begin(), arr.end(), target) - arr.begin())
#define lwr transform(s.begin(), s.end(), s.begin(), ::tolower)
#define PI 3.14159265358979323846

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void ok() {








}

int32_t main() {
    fastio;
    tc 
        ok();
    
    return 0;
}