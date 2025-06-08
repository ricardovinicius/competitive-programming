//
// Created by vinia on 6/6/2025.
//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << "Ehab";
        return 0;
    }

    if ((n - 1) % 2 == 0)
    {
        cout << "Ehab";
    } else
    {
        cout << "Mahmoud";
    }

    return 0;
}