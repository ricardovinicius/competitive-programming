#include <bits/stdc++.h>

#define endl "\n"

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
    auto pos = unique(v.begin(), v.end());

    for (auto a : v)
    {
        cout << a << " ";
    }
    cout << endl;

    cout << pos - v.begin() << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}