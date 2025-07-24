#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int start = v[k - 1];

    set<int> s(v.begin(), v.end());

    auto i = s.find(start);
    int water_height = 1;
    while (next(i) != s.end())
    {
        int current_height = *i;
        int next_height = *next(i);

        water_height += next_height - current_height;

        if (current_height < water_height - 1)
        {
            cout << "NO" << endl;
            return;
        }

        advance(i, 1);

        // cout << current_height << " " << next_height << endl;
    }

    cout << "YES" << endl;
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