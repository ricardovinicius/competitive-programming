//
// Created by Ricardo on 25/06/2025.
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;

    for (ll i = 0; i < t; i++)
    {
        ll y,x;
        cin >> y >> x;

        // Find upper row result based on column
        // Pattern:
        // if column is odd = column ^ 2
        // if column is even = ((column - 1) ^ 2) + 1

        ll level = max({y, x});
        ll upper_row_value = 1;

        if (level % 2 == 0)
        {
            upper_row_value = ((level - 1) * (level - 1)) + 1;
        } else
        {
            upper_row_value = (level * level);
        }

        ll result = 1;

        if (level % 2 == 0)
        {
            result += upper_row_value + (y - 1) + (level - x) - 1;
        } else
        {
            result += upper_row_value - (y - 1) - (level - x) - 1;
        }

        cout << result << endl;
    }
}