#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int n, h;
    cin >> n >> h;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;

        if (h >= m)
        {
            ans++;
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