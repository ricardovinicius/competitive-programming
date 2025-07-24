#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        v.push_back(a);
    }

    sort(v.begin(), v.end());

    int a = 0;
    int b = n - 1;
    int ans = 0;

    while (a <= b)
    {
        if (v[a] + v[b] <= x)
        {
            a++;
        }
        b--;
        ans++;
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}