#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    map<ll, ll> arrows;
    vector<ll> baloons;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        baloons.push_back(a);
    }

    for (auto b : baloons)
    {
        if (arrows.find(b) == arrows.end())
        {
            ans++;
            if (b > 1)
                arrows[b - 1] += 1;
        }
        else
        {
            if (arrows[b] == 0)
            {
                ans++;
                if (b > 1)
                    arrows[b - 1] += 1;
            }
            else
            {
                arrows[b] -= 1;
                if (b > 1)
                    arrows[b - 1] += 1;
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}