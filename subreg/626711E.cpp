#include <bits/stdc++.h>
#define endl "\n"
#define int long long
#define MOD 1000000007
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int m;
    cin >> m;

    int inv_a = 0;

    // n^2 vai dar 10^10
    // melhorar a contagem de inversões
    // https://www.geeksforgeeks.org/dsa/inversion-count-in-array-using-merge-sort/
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            if (s[i] > s[j])
            {
                inv_a++;
            }
        }
    }

    int total_a = 0;
    total_a = (inv_a * ((m + 1) * m / 2));

    // encontrar uma fórmula
    // for (int i = 0; i < m; i++)
    // {
    //     total_a += (inv_a * (m - i));
    // }

    string r = s;
    reverse(r.begin(), r.end());

    int inv_b = 0;

    for (int i = 0; i < r.size(); i++)
    {
        for (int j = i; j < r.size(); j++)
        {
            if (r[i] > r[j])
            {
                inv_b++;
            }
        }
    }

    int total_b = 0;
    total_b = inv_b * (m * (m - 1) / 2);

    // encontrar uma fórmula
    // for (int i = 1; i < m; i++)
    // {
    //     total_b += inv_b * (m - i);
    // }

    cout << total_a + total_b << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}