#include <bits/stdc++.h>

#define endl "\n"
#define ll long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;

    string ans;

    for (int i = 0; i < n; i++)
    {
        string c;
        ll l;

        cin >> c >> l;

        if (ans.size() + l > 100)
        {
            cout << "Too Long" << endl;
            return;
        }

        for (int j = 0; j < l; j++)
        {
            ans.append(c);
        }
    }

    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}