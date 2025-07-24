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
        int n;
        cin>>n;

        string a;
        cin>>a;

        bool flag = false;

        for (int i = 0; i < n - 2; i++)
        {
            if (count(a.begin(), a.end() - 1, a[i]) > 1)
            {
                flag = true;
                break;
            }
        }

        for (int i = 1; i < n - 1; i++)
        {
            if (count(a.begin() + 1, a.end(), a[i]) > 1)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
}