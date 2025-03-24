#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + m);
        if (a[0] > b[m - 1])
            cout << "Tsondu" << endl;
        else if (a[0] < b[m - 1])
            cout << "Tenzing" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}