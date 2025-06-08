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

        set<int> prev_part;
        set<int> cur_part;

        int amount = 0;

        for (int i = 0; i < n; i++)
        {
            cur_part.insert(nums[i]);

            if (auto search = prev_part.find(nums[i]); search != prev_part.end())
            {
                prev_part.extract(search);
            }

            if (prev_part.empty())
            {
                prev_part.swap(cur_part);
                amount++;
            }
        }

        cout << amount << endl;
    }
}