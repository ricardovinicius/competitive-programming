#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

void solve()
{
    int n;
    cin >> n;

    bool is_even = false;

    int a, b, c;
    cin >> a >> b >> c;

    bool a_is_even = (a % 2 == 0);
    bool b_is_even = (b % 2 == 0);
    bool c_is_even = (c % 2 == 0);

    if (a_is_even == b_is_even && b_is_even == c_is_even)
    {
        is_even = a_is_even;
    }

    if (a_is_even == b_is_even && b_is_even != c_is_even)
    {
        cout << 3 << endl;
        return;
    }

    if (a_is_even != b_is_even && a_is_even == c_is_even)
    {
        cout << 2 << endl;
        return;
    }

    if (a_is_even != b_is_even && b_is_even == c_is_even)
    {
        cout << 1 << endl;
        return;
    }

    for (int i = 4; i <= n; i++)
    {
        int x;
        cin >> x;

        if (i == 1 && x % 2 == 0)
        {
            is_even = true;
        }

        if (is_even && x % 2 != 0)
        {
            cout << i << endl;
            return;
        }

        if (!is_even && x % 2 == 0)
        {
            cout << i << endl;
            return;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}