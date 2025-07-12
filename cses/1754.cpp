#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for (cin >> t; t > 0; t--)
    {
        int x, y;
        cin >> x >> y;

        int a = max(x, y);
        int b = min(x, y);

        if (a > 0 && b > 0)
        {
            if (a != b)
            {
                int mult = a - b;

                a -= mult * 2;
                b -= mult;
            }

            cout << b << " " << b << endl;

            if ((a + b) % 3 == 0)
            {
                a = 0;
                b = 0;
            }
        }

        if (a != 0 || b != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}