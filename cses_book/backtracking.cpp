#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

int n;
int ans = 0;
vector<int> column, diag1, diag2;

void search(int y, vector<vector<int>> m)
{
    if (y == n)
    {
        ans++;
        return;
    }

    for (int x = 0; x < n; x++)
    {
        if (column[x] || diag1[x + y] || diag2[x - y + n - 1])
            continue;

        if (m[x][y])
            continue;

        column[x] = diag1[x + y] = diag2[x - y + n - 1] = 1;
        search(y + 1, m);
        column[x] = diag1[x + y] = diag2[x - y + n - 1] = 0;
    }
};

void solve()
{
    string fr;
    cin >> fr;

    n = fr.size();

    // cout << n << endl;

    vector<vector<int>> m(n, vector(n, 0));

    for (int i = 0; i < fr.size(); i++)
    {
        if (fr[i] == '*')
        {
            m[0][i] = 1;
        }
    }

    for (int i = 1; i < fr.size(); i++)
    {
        string r;
        cin >> r;
        for (int j = 0; j < r.size(); j++)
        {
            if (r[j] == '*')
            {
                m[i][j] = 1;
            }
        }
    }

    column.resize(n, 0);
    diag1.resize(2 * n - 1, 0);
    diag2.resize(2 * n - 1, 0);

    search(0, m);

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