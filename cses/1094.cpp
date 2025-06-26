//
// Created by Ricardo on 24/06/2025.
//
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ll n;
    cin>>n;

    vector<ll> v(n);

    for(ll i=0;i<n;i++) cin>>v[i];

    ll sol = 0;

    for (ll i=0;i<n - 1;i++)
    {
        if (v[i] > v[i + 1])
        {
            sol += v[i] - v[i + 1];
            v[i + 1] = v[i];
        }
    }

    cout<<sol;
}