#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    set<string> a;

    do
    {
        a.insert(s);
    } while (next_permutation(s.begin(), s.end()));

    cout << a.size() << endl;

    for (auto b : a)
    {
        cout << b << endl;
    }
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