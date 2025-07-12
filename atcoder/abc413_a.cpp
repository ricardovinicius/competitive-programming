#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        m -= a;

        if (m < 0)
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}