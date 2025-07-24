#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
using namespace std;

void hanoi(int n, int a, int b, int c)
{
    if (n == 1)
    {
        // cout << a << " " << c << endl;
    }
    else
    {
        hanoi(n - 1, a, c, b);
        // cout << a << " " << c << endl;
        hanoi(n - 1, b, a, c);
    }
}

void solve()
{
    int n;
    cin >> n;
    cout << pow(2, n) - 1 << endl;
    hanoi(n, 1, 2, 3);
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