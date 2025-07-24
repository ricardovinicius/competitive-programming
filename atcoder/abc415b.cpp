#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    string a;
    cin >> a;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != '#')
        {
            continue;
        }

        cout << i + 1;

        while (a[++i] != '#')
        {
        }

        cout << ',' << i + 1 << endl;
    }
}

void solve_2()
{
    string s;
    cin >> s;

    vector<int> a;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '#')
        {
            a.push_back(i);
        }
    }

    for (int i = 0; i < a.size() - 1; i += 2)
    {
        cout << a[i] + 1 << "," << a[i + 1] + 1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve_2();
}