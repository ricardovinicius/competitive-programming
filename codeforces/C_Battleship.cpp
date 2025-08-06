#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> m(10, vector(10, 0));

    for (int i = 0; i < n; i++)
    {
        int d, l, r, c;
        cin >> d >> l >> r >> c;

        r--;
        c--;

        if (d == 0)
        {
            if (c + (l - 1) > 9)
            {
                cout << "N" << endl;
                return;
            }

            for (int j = c; j <= c + (l - 1); j++)
            {
                if (m[r][j])
                {
                    cout << "N" << endl;
                    return;
                }
                m[r][j] = 1;
            }
        }
        else
        {
            if (r + (l - 1) > 9)
            {
                cout << "N" << endl;
                return;
            }

            for (int j = r; j <= r + (l - 1); j++)
            {
                if (m[j][c])
                {
                    cout << "N" << endl;
                    return;
                }

                m[j][c] = 1;
            }
        }
    }

    cout << "Y" << endl;

    // for (auto a : m)
    // {
    //     for (auto b : a)
    //     {
    //         cout << b << " ";
    //     }
    //     cout << endl;
    // }
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