#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    double a, b, c;
    cin >> a >> b >> c;

    vector<vector<int>> m(10, vector<int>(10, 0));

    int area = 0;

    for (int i = 1; i <= 10; i++)
    {
        int y = ((a * i * i) + (b * i) + c);
        y = min(y, 10);

        for (int j = 1; j <= y; j++)
        {
            area++;
            m[10 - j][i - 1] = 1;
        }
    }

    for (auto a : m)
    {
        for (auto b : a)
        {
            cout << b << " ";
        }

        cout << endl;
    }

    cout << area << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}