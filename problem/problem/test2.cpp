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

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        for (int x = 0; x >= a && x <= b; x++)
        {
            for (int y = 0; y >= b && y <= c; y++)
            {
                for (int z = 0; z >= c && z <= d; z++)
                {
                    if (x + y > z && x + z > y && y + z > x)
                    {
                        cout << x << " " << y << " " << z << endl;
                    }
                }
            }
        }
    }
    return 0;
}