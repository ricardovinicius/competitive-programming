//
// Created by Ricardo on 03/07/2025.
//
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for (cin >> t; t > 0; t--)
    {
        int n, m;
        cin>>n>>m;

        vector mat(n, vector<int>(m));

        int biggest_value = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x;
                cin>>x;

                if (x > biggest_value)
                {
                    biggest_value = x;
                }

                mat[i][j] = x;
            }
        }

        vector<pair<int, int> > biggest_value_pos;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == biggest_value)
                {
                    biggest_value_pos.push_back(make_pair(i, j));
                }
            }
        }

        bool ispossible = false;

        for (int i = 0; i < n; i++)
        {
            bool flag = true;
            for (int j = 0; j < m; j++)
            {
                for (auto pos : biggest_value_pos)
                {
                    if (pos.first != i && pos.second != j)
                    {
                        flag = false;
                    }
                }

                if (flag)
                {
                    ispossible = true;
                    break;
                }
            }

            if (ispossible)
            {
                break;
            }
        }

        if (ispossible)
        {
            cout << biggest_value - 1 << endl;
        } else
        {
            cout << biggest_value << endl;
        }
    }
}