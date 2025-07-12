#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    string str;
    cin >> n >> str;

    map<string, int> mp;

    for (int i = 0; i < str.size() - 1; i++)
    {
        mp[str.substr(i, 2)] += 1;
    }

    pair<string, int> biggest_node = *mp.begin();

    for (auto a : mp)
    {
        if (biggest_node.second < a.second)
        {
            biggest_node = a;
        }
    }

    cout << biggest_node.first << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}