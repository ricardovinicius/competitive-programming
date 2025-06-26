//
// Created by Ricardo on 25/06/2025.
//
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;

    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    if (n < 4)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
}