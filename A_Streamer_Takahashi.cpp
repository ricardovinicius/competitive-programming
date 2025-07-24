#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int l, r;
    cin >> l >> r;

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a <= l && b >= r)
        {
            ans++;
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