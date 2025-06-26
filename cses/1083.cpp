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

    vector<ll> v(n);

    for(ll i=0;i<n-1;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    for (ll i=0;i<n-1;i++)
    {
        if (v[i + 1] - v[i] > 1)
        {
            cout << v[i] + 1 << endl;
            return 0;
        }
    }

    cout << v[n - 1] + 1 << endl;
}