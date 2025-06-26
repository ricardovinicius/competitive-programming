//
// Created by Ricardo on 23/06/2025.
//
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;

    vector<ll> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    ll res = 0;
    ll counter = 0;

    for(ll i=0;i<n;i++)
    {
        if (v[i] == 1)
        {
            if (res == 0)
            {
                counter = 1;
                res = 1;
            }

            res *= counter;
            counter = 0;
        }

        counter++;
    }

    cout << res << endl;
}