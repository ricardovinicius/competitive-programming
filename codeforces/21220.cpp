#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    if (max(n, m) > 2 && min(n, m) > 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t)
    {
        solve();
        t--;
    }
}