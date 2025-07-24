#include <bits/stdc++.h>

#define endl "\n"
#define ll long long int

using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;

        if (a == 1 || a == 2)
        {
            cout << "NO" << endl;
            continue;
        }

        int div_counter = 0;

        for (int j = 2; j * j <= a; j++)
        {
            if (a % j == 0)
            {
                div_counter++;
            }

            if (div_counter > 1)
            {
                break;
            }
        }

        if (div_counter == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
}