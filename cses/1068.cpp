//
// Created by Ricardo on 23/06/2025.
//

#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;

    while (n > 1)
    {
        cout << n << " ";
        if (n % 2 == 0) {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
    }

    cout << 1 << endl;
}