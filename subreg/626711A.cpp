#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<int, int> m;

    for (int i = 0; i < pow(2, n); i++)
    {
        int c = 0;
        int n = i;
        while (n > 0)
        {
            if (n % 2 == 1)
                c++;

            n /= 2;
        }

        m[c]++;
    }

    int ans = 0;

    for (auto a : m)
    {
        // cout << a.first << ":" << a.second << endl;
        ans += a.second % 2;
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