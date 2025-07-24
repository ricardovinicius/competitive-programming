#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    int n_a, n_b;
    cin >> n_a >> n_b;

    int k, m;
    cin >> k >> m;

    vector<int> a;

    for (int i = 0; i < n_a; i++)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }

    vector<int> b;

    for (int i = 0; i < n_b; i++)
    {
        int x;
        cin >> x;

        b.push_back(x);
    }

    reverse(b.begin(), b.end());

    if (a[k - 1] < b[m - 1])
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

    solve();
}