#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> l;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        l.push_back(make_pair(a, b));
    }
    cout << endl;

    // for (auto a : l)
    // {
    //     cout << a.first << " " << a.second << endl;
    // }

    // cout << endl;

    sort(l.begin(), l.end(), [](const auto &a, const auto &b)
         { return (a.first - a.second) < (b.first - b.second); });

    // for (auto a : l)
    // {
    //     cout << a.first << " " << a.second << endl;
    // }

    // cout << endl;

    int stickers = 0;

    int i = 0;
    while (i < l.size())
    {
        auto a = l[i];

        if (n >= a.first)
        {
            n -= a.first;
            n += a.second;
            stickers++;
            // cout << a.first << " " << a.second << endl;
        }
        else
        {
            i++;
        }

        // cout << a.first << " " << a.second << endl;
    }

    cout << endl
         << stickers << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}