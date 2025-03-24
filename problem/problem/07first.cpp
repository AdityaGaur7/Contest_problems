#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <cmath>
#define f(n) for (int i = 0; i < n; i++)
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        f(n)
        {
            cin >> a[n];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; i < n; j++)
            {
                if (a[i] != i)
                {
                    if (a[i] == j)
                    {
                        swap(a[i], a[j]);
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}