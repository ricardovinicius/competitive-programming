//
// Created by vinia on 6/8/2025.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for (cin >> t; t > 0; t--)
    {
        int n;
        cin >> n;

        int size = n;
        int low_num = 1;
        int big_num = n;

        if (size % 2 != 0)
        {
            big_num--;
        }

        while (n > 0)
        {
            if (low_num <= size)
            {
                cout << low_num << " ";
                low_num += 2;
            } else if (big_num > 0)
            {
                cout << big_num << " ";
                big_num -= 2;
            }

            n--;
        }
    }
}