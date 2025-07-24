#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    ll sm_1 = v[0];
    ll sm_2 = v[1];
    ll old_a = 0;
    ll ans = accumulate(v.begin(), v.end(), 0LL);

    for (ll i = 0; i < k; i++)
    {
        ll a = sm_1 + sm_2;
        if (a % 2 == 0)
        {
            a = a / 2;
        }
        else
        {
            a = (a + 1) / 2;
        }

        if (sm_1 > a)
        {
            sm_2 = sm_1;
            sm_1 = a;
        }
        else if (sm_2 > a)
        {
            sm_2 = a;
        }

        if (old_a == a)
        {
            ans += a * (k - i);
            break;
        }
        else
        {
            old_a = a;
            ans += a;
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}