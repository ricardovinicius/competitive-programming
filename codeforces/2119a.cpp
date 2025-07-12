#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for (cin >> t; t > 0; t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a < b)
        {
            if (x < y)
            {
                cout << (b - a) * x << endl;
            }
            else
            {
                float op_amount = b - a;

                if (a % 2 == 0)
                {
                    cout << (int)((x * floor(op_amount / 2.0)) + (y * ceil(op_amount / 2.0))) << endl;
                }
                else
                {
                    cout << (int)((y * floor(op_amount / 2.0)) + (x * ceil(op_amount / 2.0))) << endl;
                }
            }
        }
        else if (a > b)
        {
            if (a - b > 1)
            {
                cout << -1 << endl;
            }
            else
            {
                if (a % 2 == 0)
                {
                    cout << -1 << endl;
                }
                else
                {
                    cout << y << endl;
                }
            }
        }
        else
        {
            cout << 0 << endl;
        }
    }
}