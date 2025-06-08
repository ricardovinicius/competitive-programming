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

        vector<int> nums;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            nums.push_back(a);
        }

        while (true)
        {
            bool op_1 = true;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] < i + 1)
                {
                    op_1 = false;
                    break;
                }
            }

            if (op_1)
            {
                for (int i = 0; i < n; i++)
                {
                    nums[i] -= i + 1;
                }

                continue;
            }

            bool op_2 = true;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] < n - i)
                {
                    op_2 = false;
                    break;
                }
            }

            if (op_2)
            {
                for (int i = 0; i < n; i++)
                {
                    nums[i] -= n - i;
                }

                continue;
            }


            break;
        }

        bool res = true;
        for (int num : nums)
        {
            if (num > 0)
            {
                res = false;
                break;
            }
        }

        if (res)
        {
            cout << "YES" << endl;
        } else
        {
            cout << "NO" << endl;
        }
    }
}