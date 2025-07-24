#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;

    map<string, int> m;

    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;

        if (m.find(a) != m.end())
        {
            cout << a << m[a] << endl;
        }
        else
        {
            cout << "OK" << endl;
        }
        m[a]++;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}