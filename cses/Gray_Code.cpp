#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < pow(2, n); i++)
    {
        int b = i ^ (i >> 1);
        for (int j = 0; j < n; j++)
        {
            if (b & (1 << j))
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        cout << endl;
    }
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