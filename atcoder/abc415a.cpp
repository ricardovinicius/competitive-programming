#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    int n;

    unordered_set<int> um;
    for (cin >> n; n > 0; n--)
    {
        int a;
        cin >> a;
        um.insert(a);
    }

    int x;
    cin >> x;

    if (um.find(x) != um.end())
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}