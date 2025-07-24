//
// Created by Ricardo on 03/07/2025.
//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for (cin >> t; t > 0; t--)
    {
        int n, s;
        cin >> n >> s;

        int a = 0, b = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;

            if (i == 0) { a = x; }
            if (i == n - 1) { b = x; }
        }

        int dist_a = abs(a - s);
        int dist_b = abs(b - s);

        int ans = 0;

        if (n ==  1)
        {
            ans = dist_a;
        } else if (dist_a > dist_b)
        {
            ans = dist_b + abs(b - a);
        } else
        {
            ans = dist_a + abs(b - a);
        }

        cout << ans << endl;
    }
}
