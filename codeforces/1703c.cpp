#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for (cin >> t; t > 0; t--)
    {
        int n;
        cin >> n;

        vector<int> wheels;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            wheels.push_back(a);
        }

        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;

            string moves;
            cin >> moves;

            for (auto move : moves)
            {
                if (move == 'D')
                {
                    wheels[i] += (wheels[i] == 9) ? -9 : 1;
                }
                else
                {
                    wheels[i] += (wheels[i] == 0) ? 9 : -1;
                }
            }

            cout << wheels[i] << " ";
        }

        cout << endl;
    }
}
