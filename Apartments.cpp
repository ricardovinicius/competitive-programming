#include <bits/stdc++.h>

#define endl "\n"
#define ll long long int

using namespace std;

void solve()
{
    ll n, m, k;

    cin >> n >> m >> k;

    vector<ll> d;

    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        d.push_back(a);
    }

    sort(d.begin(), d.end());

    vector<ll> s;

    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        s.push_back(a);
    }

    sort(s.begin(), s.end());

    ll ans = 0;

    ll x = 0, y = 0;

    while (x < d.size() && y < s.size())
    {
        if (abs(d[x] - s[y]) <= k)
        {
            ans++;
            x++;
            y++;
        }
        else if (d[x] < s[y])
        {
            x++;
        }
        else
        {
            y++;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}