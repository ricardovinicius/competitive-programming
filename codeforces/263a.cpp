#include <bits/stdc++.h>

using namespace std;

int main()
{
    int values[5][5] = {
        {4, 3, 2, 3, 4},
        {3, 2, 1, 2, 3},
        {2, 1, 0, 1, 2},
        {3, 2, 1, 2, 3},
        {4, 3, 2, 3, 4},
    };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                cout << values[i][j] << endl;
                return 0;
            }
        }
    }
}