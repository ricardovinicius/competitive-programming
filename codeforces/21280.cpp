#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int n, c;
    cin >> n >> c;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int foo = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] * pow(2, foo) <= c)
        {
            foo++;
        }
    }

    cout << v.size() - foo << endl;
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