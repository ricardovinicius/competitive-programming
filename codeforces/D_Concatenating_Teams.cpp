#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<string> a;
    vector<string> b;

    map<string, vector<string>> conc;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a.push_back(s);
    }

    for (int i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        b.push_back(s);
    }

    for (auto s : a)
    {
        for (auto p : b)
        {
            conc[s + p].push_back(s);
            conc[s + p].push_back(p);
        }
    }

    for (auto a : conc)
    {
        if (a.second.size() > 2) {
            
        }
    }

    cout << pecu_a.size() << " " << pecu_b.size() << endl;
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