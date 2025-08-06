#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    vector<int> dist;
    dist.push_back(v.back() - v.front() + 1);

    for (int i = 1; i < n; i++)
    {
        dist.push_back(360 - v[i] + v[i - 1] + 1);
    }

    cout << *min_element(dist.begin(), dist.end()) << endl;
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